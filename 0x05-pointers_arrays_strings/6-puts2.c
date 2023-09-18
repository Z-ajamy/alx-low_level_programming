#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character,
 *         followed by a new line.
 * @s: This pointer points to a character or string.
 *
 * Description: This function iterates through the string pointed to by 's' and
 *              prints every other character starting with the first character.
 *              It then prints a newline character to terminate the line.
 */
void puts2(char *s)
{
    int a;

    for (a = 0; s[a] != '\0'; a++)
    {
        if (a % 2 == 0)
        {
            _putchar(s[a]);
        }
    }
    _putchar('\n');
}
