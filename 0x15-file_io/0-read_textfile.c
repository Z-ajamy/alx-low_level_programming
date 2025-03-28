#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int i, fd, n;
    char *ptr;

    if (!filename)
        return (0);
    
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);
    
    ptr = (char *)malloc(sizeof(char) * letters);
    if (!ptr)
    {
        close(fd);
        return (0);
    }
    
    i = read(fd, ptr, letters);
    if (i == -1)
    {
        close(fd);
        free(ptr);
        return (0);
    }
    
    n = write(STDOUT_FILENO, ptr, i);
    
    close(fd);
    free(ptr);
    return (n);
}
