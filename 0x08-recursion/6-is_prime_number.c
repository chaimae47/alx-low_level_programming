#include "main.h"

/**
* is_divisible - Helper function to check if 'n' is divisible by 'divisor'.
*
* @n: The number to be checked for divisibility.
* @divisor: The current divisor to check for divisibility.
* Return: 1 if 'n' is divisible by 'divisor', otherwise 0.
*/
int is_divisible(int n, int divisor)
{
if (divisor >= n)
return (0);

if (n % divisor == 0)
return (1);

return (is_divisible(n, divisor + 1));
}

/**
* is_prime_number - Checks if a number is a prime number using recursion.
*
* @n: The number to be checked.
* Return: 1 if 'n' is a prime number, otherwise 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (!is_divisible(n, 2));
}
