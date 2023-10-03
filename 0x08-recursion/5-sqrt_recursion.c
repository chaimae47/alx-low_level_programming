#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number .
*
* @n: The number for which the square root is to be calculated.
* Return: The natural square root of 'n', or -1 .
*/
int find_sqrt(int n, int guess);

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    else if (n == 0 || n == 1)
        return (n);
    else
        return (find_sqrt(n, n / 2));
}

int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
        return (guess);
    else if (guess * guess < n)
        return (find_sqrt(n, guess + 1));
    else
        return (find_sqrt(n, guess - 1));
}

