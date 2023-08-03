#include "main.h"

/**
* sqrt_recursive - Helper function to calculate the square root using recursion.
*
* @n: The number for which the square root is to be calculated.
* @start: The starting value for the search.
* @end: The ending value for the search.
* Return: The natural square root of 'n', or -1 
*/
int sqrt_recursive(int n, int start, int end)
{
int mid = (start + end) / 2;

if (start > end)
return (-1);

if (mid * mid == n)
return mid;

if (mid * mid > n)
return (sqrt_recursive(n, start, mid - 1));


return (sqrt_recursive(n, mid + 1, end));
}

/**
* _sqrt_recursion - Returns the natural square root of a number using recursion.
*
* @n: The number for which the square root is to be calculated.
* Return: The natural square root of 'n', or -1  */
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;

return (sqrt_recursive(n, 0, n));
}
