#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number .
*
* @n: The number for which the square root is to be calculated.
* Return: The natural square root of 'n', or -1 .
*/

/**
* _sqrt_recursion - Returns the natural square
* root of a number.
* @n: The number for which to find the square root.
* Return: The square root of n, or -1 if n doesn't have a
* natural square root.
*/
int find_sqrt(int n, int guess);

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (find_sqrt(n, n / 2, n));
}

int find_sqrt(int n, int guess, int original_n)
{
if (guess <= 0)
return (-1); // If the guess becomes non-positive, n doesn't have a natural square root.

if (guess * guess == original_n)
return (guess);
else if (guess * guess < original_n)
return (find_sqrt(original_n, guess + 1, original_n));
else
return (find_sqrt(original_n, guess - 1, original_n));
}
