#include"main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t nread, nwrite;
    char *buffer;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    nread = read(fd, buffer, letters);
    if (nread == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    nwrite = write(STDOUT_FILENO, buffer, nread);
    if (nwrite == -1 || nwrite != nread)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);

    return (nwrite);
}
