#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Description: Header file containing function prototypes
 * for various standard library functions, including
 * character classification, string manipulation, and memory operations.
 */

/* Character classification functions */

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c);

/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer to process
 *
 * Return: The absolute value of i
 */
int _abs(int i);

/* String manipulation functions */

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s);

/**
 * _strcpy - Copies a string, including the null terminator
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string to append
 * @n: Maximum number of bytes to append
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Copies up to n characters from src to dest
 * @dest: The destination buffer
 * @src: The source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Negative, zero, or positive if s1 < s2, s1 == s2, or s1 > s2
 */
int _strcmp(char *s1, char *s2);

/* Memory manipulation functions */

/**
 * _memset - Fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to fill with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Copies memory from source to destination
 * @dest: The destination buffer
 * @src: The source buffer
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/* String searching functions */

/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The initial segment of the string
 * @accept: The characters to match
 *
 * Return: Number of bytes in s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The characters to look for
 *
 * Return: Pointer to first occurrence in s of any byte from accept, or NULL
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: Pointer to beginning of needle in haystack, or NULL
 */
char *_strstr(char *haystack, char *needle);

/* Miscellaneous functions */

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer value
 */
int _atoi(char *s);

/**
 * _puts - Prints a string followed by a newline
 * @str: The string to print
 */
void _puts(char *str);

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1 is returned
 */
int _putchar(char c);

#endif /* MAIN_H */
