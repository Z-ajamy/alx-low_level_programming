#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
#include <stdio.h>

int is_palindrome(char *s);

int main(void)
{
    int i;
    char *test_cases[] = {
        "racecar", "madam", "hello", "level", "world",
        "", "a", "aa", "ab", "aba",
        "abcba", "abccba", "abcd", "abcdefghhgfedcba", "abcdefghgfedcba",
        "noon", "civic", "radar", "deified", "repaper",
        "wasitacaroracatisaw", "redder", "refer", "wow", "bob",
        "notapalindrome", "almosttsetomla", "step on no pets", "taco cat", "never odd or even"
    };

    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (i = 0; i < num_cases; i++)
    {
        printf("Test %2d: Is \"%s\" a palindrome? %s\n", 
               i + 1, test_cases[i], is_palindrome(test_cases[i]) ? "Yes" : "No");
    }

    return 0;
}
