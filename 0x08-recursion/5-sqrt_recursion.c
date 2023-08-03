#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number .
*
* @n: The number for which the square root is to be calculated.
* Return: The natural square root of 'n', or -1 if .
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);


int i;
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
return (i);
}

return (-1);
}
