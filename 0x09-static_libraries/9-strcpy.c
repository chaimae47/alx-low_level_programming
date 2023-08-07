#include "main.h"

/**
* _strcpy - Copie the string pointed to by src to the buffer pointed to by dest
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string.
*
* Return: The pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

/* Copy characters from src to dest until the null terminator is encountered */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0'; /* Add the terminating null byte to dest */

return (dest);
}
