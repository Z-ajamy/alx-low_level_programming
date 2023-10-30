#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, written, length = 0;

	/* check filename */
	if (filename == NULL)
		return (-1);

	/* create file with rw------- permissions */
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* failed */
	if (file_descriptor < 0)
		return (-1);

	/* check if text_content is NULL */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		written = write(file_descriptor, text_content, length);

		/* failed to write */
		if (written < 0)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}
