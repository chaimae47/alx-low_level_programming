#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: the number to check
*
* Return: 1 if n is greater than zero, 0 if n is 0, -1 if n is less than 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
#include "main.h"

/**
* _abs - computes the absolute value of an integer
* @n: the integer to compute the absolute value of
*
* Return: the absolute value of n
*/
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-n);
}
