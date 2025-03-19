#include "main.h"

/**
 * size_of_strs - Calculates the total size needed for concatenation
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: Total size including newline characters
 */
unsigned int size_of_strs(int ac, char **av);

 
/**
 * argstostr - Concatenates all program arguments into a single string
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to the newly allocated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int size, i, j, c;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = size_of_strs(ac, av);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);

	c = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[c] = av[i][j];
			j++;
			c++;
		}
		ptr[c] = '\n';
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}

/**
 * size_of_strs - Computes total memory size needed
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: The required buffer size for concatenation
 */
unsigned int size_of_strs(int ac, char **av)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
		}
		count += (j + 1);
	}
	return (count);
}
