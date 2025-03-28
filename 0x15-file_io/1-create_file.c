#include"main.h"

int create_file(const char *filename, char *text_content)
{
    int fd, i = 0, n;

    if (!filename)
        return -1;
    fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
    if (fd == -1)
        return -1;
    if(text_content == NULL)
    {
        close(fd);
        return 1;
    }
    while (text_content[i])
    {
        i++;
    }
    
    n = write(fd, text_content, i);
    if (i != n)
    {
        close(fd);
        return -1;
    }
    return 1;
    
    
}
