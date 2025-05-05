#include <stdio.h>

/**
 * a - Function that prints a specific message before main runs
 *
 * Description: This function uses the constructor attribute so that
 *              it runs automatically before the main function is executed.
 */
void a(void) __attribute__((constructor));

/**
 * a - Prints the message before the execution of main
 */
void a(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
