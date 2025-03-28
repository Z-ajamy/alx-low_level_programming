#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, i = 0, n;

    if (!filename)
        return (-1);
    
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);
    
    if (!text_content)
    {
        close(fd);
        return (1);
    }
    
    while (text_content[i])
        i++;
    
    if (i == 0)
    {
        close(fd);
        return (1);
    }
    
    n = write(fd, text_content, i);
    if (n != i)
    {
        close(fd);
        return (-1);
    }
    
    close(fd);
    return (1);
}
