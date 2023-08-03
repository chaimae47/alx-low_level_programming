#include "main.h"

/**
* _sqrt_recursive - Helper function to calculate the square root .
*
* @n: The number for which the square root is to be calculated.
* @start: The starting value for the search.
* @end: The ending value for the search.
* Return: The natural square root of 'n', or -1.
*/
int _sqrt_recursive(int n, int start, int end)
{
if (start > end)
return (-1);

int mid = (start + end) / 2;

if (mid * mid == n)
return (mid);

if (mid * mid > n)
return (_sqrt_recursive(n, start, mid - 1));


return (_sqrt_recursive(n, mid + 1, end));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
*
* @n: The number for which the square root is to be calculated.
* Return: The natural square root of 'n', or -1.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);


return (_sqrt_recursive(n, 0, n));
}
