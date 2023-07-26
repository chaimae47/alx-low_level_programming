#include "main.h"

/**
* _strcmp - Compares two strings character by character.
* @s1: Pointer to the first string.
* @s2: Pointer to the second string.
*
* Return: Integer value less than, equal to, or greater than 0,
*         depending on whether the first string is less than, equal to,
*         or greater than the second string, respectively.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
