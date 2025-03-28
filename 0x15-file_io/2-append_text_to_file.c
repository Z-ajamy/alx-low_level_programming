#include"main.h"

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, i = 0, n;
    if (!filename)
        return -1;
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return -1;
    while (text_content[i])
        i++;

    if (i == 0)
    {
        close(fd);
        return 1;
    }
    n = write(fd, text_content, i);
    if (n != i)
    {
        close(fd);
        return -1;
    }
    close(fd);
    return 1;
}
