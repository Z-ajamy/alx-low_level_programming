#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 * 
 * Return: On success 1, on error -1
 */
int _putchar(char c);

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 * 
 * Return: Pointer to allocated memory, exits with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 * 
 * Return: Pointer to newly allocated space containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Size of each element
 * 
 * Return: Pointer to allocated memory initialized to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * 
 * Return: Pointer to new array containing values from min to max (inclusive)
 */
int *array_range(int min, int max);

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to previously allocated memory
 * @old_size: Size of allocated space for ptr
 * @new_size: New size of the memory block
 * 
 * Return: Pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 * errors - Handles errors by printing a message and exiting
 */
void errors(void);

/**
 * _strlen - Returns the length of a string
 * @s: String to check
 * 
 * Return: Length of the string
 */
int _strlen(char *s);

/**
 * is_digit - Checks if a string consists of only digits
 * @s: String to check
 * 
 * Return: 1 if string is a number, 0 otherwise
 */
int is_digit(char *s);

#endif /* MAIN_H */
