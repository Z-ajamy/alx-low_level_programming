#include "main.h"

/**
 * arr_of_num_letrs - Calculates the length of each word in the string
 * @num_word: Number of words in the string
 * @p: Input string
 *
 * Return: Pointer to an array containing the length of each word
 */
int *arr_of_num_letrs(int num_word, char *p);

/**
 * num_words - Counts the number of words in a string
 * @str: Input string
 *
 * Return: Number of words
 */
int num_words(char *str);

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Description:
 * - This function takes a string with words separated by spaces
 * - It returns a dynamically allocated array of words
 * - Each word is a separate string in the allocated array
 * - If memory allocation fails or if the input is invalid, it returns NULL
 *
 * Return: A pointer to an array of words (strings), NULL if it fails
 */
char **strtow(char *str)
{
	char **ptr;
	int num_word, i, j, c;
	int *p;

	/* Check for NULL input or empty string */
	if (!str || str[0] == '\0')
		return (NULL);

	/* Get the number of words in the string */
	num_word = num_words(str);
	if (num_word == 0)
		return (NULL);

	/* Allocate memory for an array of string pointers */
	ptr = (char **)malloc(sizeof(char *) * (num_word + 1));
	if (!ptr)
		return (NULL);

	/* Initialize all pointers to NULL to avoid undefined behavior */
	for (i = 0; i <= num_word; i++)
		ptr[i] = NULL;

	/* Get the array of word lengths */
	p = arr_of_num_letrs(num_word, str);
	if (!p)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate memory for each word in the array */
	for (i = 0; i < num_word; i++)
	{
		ptr[i] = (char *)malloc(sizeof(char) * (p[i] + 1));
		if (!ptr[i])
		{
			/* Free previously allocated memory in case of failure */
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			free(p);
			return (NULL);
		}
	}

	/* Initialize indices */
	c = 0, i = 0, j = 0;

	/* Skip leading spaces */
	while (str[i] == ' ')
		i++;

	/* Copy words into the allocated memory */
	for (; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			ptr[c][j] = '\0';
			c++;
			j = 0;
			/* Skip consecutive spaces */
			while (str[i] == ' ')
				i++;
			/* If end of string is reached, break */
			if (!str[i] || c >= num_word)
				break;
			continue;
		}

		ptr[c][j++] = str[i];
	}

	/* Ensure the last word is null-terminated */
	if (c < num_word)
		ptr[c][j] = '\0';

	free(p);
	return (ptr);
}

/**
 * num_words - Counts the number of words in a string
 * @str: The input string
 *
 * Description:
 * - A word is defined as a sequence of non-space characters
 * - Spaces are ignored when counting words
 * - The function properly handles leading and trailing spaces
 *
 * Return: The number of words in the string
 */
int num_words(char *str)
{
	int i = 0, num = 0;

	/* Skip leading spaces */
	while (str[i] == ' ')
		i++;

	/* If string is empty after trimming, return 0 */
	if (str[i] == '\0')
		return (0);

	/* Count words */
	while (str[i])
	{
		if (str[i] == ' ' && i > 0 && str[i - 1] != ' ')
			num++;
		i++;
	}

	/* If the last character was a space, return num */
	if (i > 0 && str[i - 1] == ' ')
		return (num);

	return (num + 1);
}

/**
 * arr_of_num_letrs - Creates an array containing the length of each word
 * @num_word: Number of words in the string
 * @p: The input string
 *
 * Description:
 * - This function scans the string to determine the length of each word
 * - The result is an array where each element represents the length of a word
 *
 * Return: Pointer to an array of word lengths, NULL if allocation fails
 */
int *arr_of_num_letrs(int num_word, char *p)
{
	int *ptr;
	int i, j = 0, c;

	/* Allocate memory for the word lengths */
	ptr = (int *)malloc(sizeof(int) * num_word);
	if (!ptr)
		return (NULL);

	/* Skip leading spaces */
	while (p[j] == ' ' && p[j] != '\0')
		j++;

	/* Count letters for each word */
	for (i = 0; i < num_word; i++)
	{
		c = 0;
		while (p[j] && p[j] != ' ')
		{
			j++;
			c++;
		}
		ptr[i] = c;

		/* Skip spaces */
		while (p[j] == ' ' && p[j] != '\0')
			j++;
	}
	return (ptr);
}
