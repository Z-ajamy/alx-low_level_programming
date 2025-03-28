#include"main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    size_t i = 0;
    int n, fd = 0;
    char *ptr;
    

    if (filename == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    ptr = (char *)malloc(sizeof(char) * (letters + 1));
    if (!ptr)
    {
        close(fd);
        return 0;
    }
    n = read(fd, ptr, letters);
    
    if (n == -1)
    {
        free(ptr);
        close(fd);
        return 0;
    }
    ptr[n] = '\0';
    while (ptr[i])
    {
        _putchar(ptr[i]);
        i++;
    }
    close(fd);
    free(ptr);
    return n;
}
