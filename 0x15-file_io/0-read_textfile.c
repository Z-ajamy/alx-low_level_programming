#include"main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int i, fd, n;
    char *ptr;

    if (!filename)
        return 0;
    if ((int)letters < 0)
        return 0;
    fd = open(filename, O_RDONLY);

    if (fd == -1)
        return 0;
    
    ptr = (char*)malloc(sizeof(char) * letters);
    if (!ptr)
    {
        close(fd);
        return 0;
    }
    i = read(fd, ptr, letters);
    if (i == -1)
    {
        close(fd);
        free(ptr);
        return 0;
    }
    n = write(1, ptr, i);
    
    close(fd);
    free(ptr);
    return n;    
}
