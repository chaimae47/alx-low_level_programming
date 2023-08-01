#include <stddef.h>  

/**
* _strpbrk - locates the first occurrence in the string s 
* of any of the bytes in the string accept
* @s: pointer to the string to search
* @accept: pointer to the set of bytes to search for
*
* Return: pointer to the byte in s that matches one 
* of the bytes in accept or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
char *ptr;

while (*s != '\0')
{
ptr = accept;
while (*ptr != '\0')
{
if (*s == *ptr)
return s;
ptr++;
}
s++;
}

return (NULL);
}
