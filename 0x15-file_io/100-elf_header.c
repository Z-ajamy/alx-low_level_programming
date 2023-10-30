#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

void print_error(const char *msg) {
    dprintf(STDERR_FILENO, "Error: %s\n", msg);
    exit(98);
}

void print_magic(const unsigned char *magic) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; ++i) {
        printf("%02x", magic[i]);
        if (i < EI_NIDENT - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
}

void print_elf_header(const Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    print_magic(header->e_ident);
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_NONE ? "NONE (None)" : 
                                                         header->e_type == ET_REL ? "REL (Relocatable file)" :
                                                         header->e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                         header->e_type == ET_DYN ? "DYN (Shared object file)" :
                                                         header->e_type == ET_CORE ? "CORE (Core file)" : "<unknown>");
    printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: ./readelf <elf_file>");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Can't open file");
    }

    struct stat file_stat;
    if (fstat(fd, &file_stat) == -1) {
        close(fd);
        print_error("Can't get file status");
    }

    if (S_ISREG(file_stat.st_mode) && file_stat.st_size >= sizeof(Elf64_Ehdr)) {
        Elf64_Ehdr header;
        if (read(fd, &header, sizeof(Elf64_Ehdr)) == sizeof(Elf64_Ehdr)) {
            print_elf_header(&header);
        } else {
            close(fd);
            print_error("Can't read ELF header");
        }
    } else {
        close(fd);
        print_error("Not a valid ELF file");
    }

    close(fd);
    return 0;
}
