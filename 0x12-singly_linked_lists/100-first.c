#include <stdio.h>

/**
 * a - Function executed before main
 *      Prints a specific message
 */
void a(void) __attribute__((constructor));

/**
 * a - Prints a message before the main function is executed
 */
void a(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
