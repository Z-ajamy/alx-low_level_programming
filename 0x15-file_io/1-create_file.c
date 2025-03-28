#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: The content to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, i = 0, n;

    if (!filename)
        return (-1);
    
    fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
    if (fd == -1)
        return (-1);
    
    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }
    
    while (text_content[i])
    {
        i++;
    }
    
    n = write(fd, text_content, i);
    if (i != n)
    {
        close(fd);
        return (-1);
    }
    
    return (1);
}
