#include <stdio.h>

void print_opcodes(char *address, int bytes) {
    for (int i = 0; i < bytes; i++) {
        if (i == bytes - 1) {
            printf("%02hhx\n", address[i]);
        } else {
            printf("%02hhx ", address[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int bytes = atoi(argv[1]);
    if (bytes < 0) {
        printf("Error\n");
        return 2;
    }

    char *address = (char *)&print_opcodes;

    print_opcodes(address, bytes);
    return 0;
}
