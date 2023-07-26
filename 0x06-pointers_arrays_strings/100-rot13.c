#include "main.h"

/**
* rot13 - Encodes a string using ROT13
* @s: Pointer to the input string
*
* Return: Pointer to the resulting encoded string
*/
char *rot13(char *s)
{
char *ptr = s;
char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*s)
{
char *c = rot13_chars;
char *encoded = rot13_encoded;

while (*c)
{
if (*s == *c)
{
*s = *encoded;
break;
}

c++;
encoded++;
}

s++;
}

return ptr;
}
