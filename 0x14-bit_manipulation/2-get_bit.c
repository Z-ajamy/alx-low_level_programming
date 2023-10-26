#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index of the bit to be returned
 * Return: value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> index) & 1);
}
