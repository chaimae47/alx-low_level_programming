#include "main.h"
#include <stdio.h>

/**
* _strncpy - Copies the first n characters of the source string to the
* destination string. If there are not enough characters in src,
* the remaining part of dest will be filled with null bytes.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of characters to copy from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy the first n characters of src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* If n is greater than the length of src, fill the remaining with null bytes */
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
