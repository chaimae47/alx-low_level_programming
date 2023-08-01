#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: pointer to the string
* @c: the character to locate
*
* Return: pointer to the first occu of the char 'c' in 's',
*         or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

/* If 'c' is not found in 's', return NULL */
return (NULL);
}
