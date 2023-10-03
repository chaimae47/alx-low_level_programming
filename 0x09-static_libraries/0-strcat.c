#include "main.h"
#include <stdio.h>

/**
* _strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

/* Move the pointer 'ptr' to the end of the destination string */
while (*ptr != '\0')
ptr++;

/* Append characters from the source string to the destination string */
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}

*ptr = '\0'; /* Add the terminating null byte to the destination string */

return (dest);
}
