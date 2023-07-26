#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenates two strings, using at most n bytes from src.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of bytes to use from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

/* Move the pointer 'ptr' to the end of the destination string */
while (*ptr != '\0')
ptr++;

/* Append characters from the source string to the destination string, up to n bytes */
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}

*ptr = '\0'; /* Add the terminating null byte to the destination string */

return (dest);
}
