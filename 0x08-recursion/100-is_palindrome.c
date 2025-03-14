#include "main.h"

/**
 * compare - Compares two characters
 * @a: First character
 * @b: Second character
 *
 * Return: 1 if characters are the same, 0 otherwise
 */
int compare(char *a, char *b);

/**
 * palindrome - Recursively checks if a string is a palindrome
 * @s: The string to check
 * @len: The length of the string
 * @i: The current index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome(char *s, int len, int i);

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
	{
		return (1);
	}
	return (palindrome(s, len, 0));
}

/**
 * palindrome - Recursively checks if a string is a palindrome
 * @s: The string
 * @len: The length of the string
 * @i: The current index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome(char *s, int len, int i)
{
	if (!(compare((s + i), (s + len - i - 1))))
	{
		return (0);
	}
	i++;
	if (i >= len / 2)
	{
		return (1);
	}

	return (palindrome(s, len, i));
}

/**
 * compare - Compares two characters
 * @a: First character
 * @b: Second character
 *
 * Return: 1 if characters are the same, 0 otherwise
 */
int compare(char *a, char *b)
{
	if (*a == *b)
	{
		return (1);
	}
	return (0);
}

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
