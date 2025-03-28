#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int main(int argc, char* argv[])
{
    char *ptr;
    int fd1, fd2, i, j;

    if (argc < 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    ptr = (char*)malloc(sizeof(char) * 1024);
    if (!ptr)
    {
        dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
        exit(99);
    }

    fd1 = open(argv[1], O_RDONLY);
    if (fd1 == -1)
    {
        free(ptr);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    
    fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
    if (fd2 == -1)
    {
        free(ptr);
        close(fd1);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    i = 1;
    while (i > 0)
    {
        i = read(fd1, ptr, 1024);
        j = write(fd2, ptr, i);
        if (i == -1)
        {
            free(ptr);
            close(fd1);
            close(fd2);
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            exit(98);
        }

        if (j == -1)
        {
            free(ptr);
            close(fd1);
            close(fd2);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }

    }
    free(ptr);
    i = close(fd1);
    j = close(fd2);

    if (i == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
        exit(100);
    }
    if (j == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
        exit(100);
    }
    return 0;
}
