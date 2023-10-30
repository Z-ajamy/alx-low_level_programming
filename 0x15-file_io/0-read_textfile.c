#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 if fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t readed, printed;
	char *BUFFER;

	/* check if filename is NULL */
	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	/* failed to open file */
	if (file_descriptor < 0)
		return (0);

	BUFFER = malloc(sizeof(char) * letters);
	/* failed to allocate memory */
	if (BUFFER == NULL)
		return (0);

	readed = read(file_descriptor, BUFFER, letters);

	/* failed to read file */
	if (readed < 0)
	{
		free(BUFFER);
		return (0);
	}

	printed = write(STDOUT_FILENO, BUFFER, readed);

	/* failed to write to stdout */
	if (printed < 0)
	{
		free(BUFFER);
		return (0);
	}

	free(BUFFER);
	close(file_descriptor);
	return (printed);
}
