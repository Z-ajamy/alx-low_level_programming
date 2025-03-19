#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: Size of the array.
 * @c: Character to initialize the array with.
 * 
 * Return: Pointer to the created array, or NULL if size is 0 or memory allocation fails.
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of str.
 * @str: The string to duplicate.
 * 
 * Return: Pointer to the duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str);

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * 
 * Return: Pointer to a newly allocated space in memory containing s1 followed by s2.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - Allocates a 2D array (grid) of integers.
 * @width: Number of columns.
 * @height: Number of rows.
 * 
 * Return: Pointer to the 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid.
 * @height: Number of rows.
 */
void free_grid(int **grid, int height);

/**
 * argstostr - Concatenates all arguments of the program into a single string.
 * @ac: Argument count.
 * @av: Argument vector (array of strings).
 * 
 * Return: Pointer to the new string, or NULL if memory allocation fails.
 */
char *argstostr(int ac, char **av);

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * 
 * Return: Pointer to an array of words (each word is a string), or NULL on failure.
 */
char **strtow(char *str);

#endif /* MAIN_H */
