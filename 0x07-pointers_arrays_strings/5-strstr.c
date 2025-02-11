#include"main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: This is the main C string to be scanned.
 * @needle − This is the small string to be searched with-in haystack string.
 * Return: This function returns a pointer
 * to the first occurrence in haystack of any of
 * the entire sequence of characters
 * specified in needle, or a null pointer if
 * the sequence is not present in haystack.
*/
char *_strstr(char *haystack, char *needle)
{
    int i, j, p;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] == needle[j])
            {
                p++;
            }
        }
    }
    return(haystack - (i - j));
}
