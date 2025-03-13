#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to be updated.
 * @to: The new value to assign.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
