#include "main.h"

/**
* _atoi - Converts a string to an integer.
* @s: Pointer to the string.
*
* Return: The converted integer.
*/
int _atoi(char *s)
{
int sign = 1; 
int num = 0; 
while (*s == '-' || *s == '+')
{
if (*s == '-')
sign *= -1;
s++; 
}
while (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
s++; 
}
return (num * sign);
}
