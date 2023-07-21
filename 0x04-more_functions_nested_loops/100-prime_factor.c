#include <stdio.h>
#include <math.h>

/**
* is_prime - Check if a number is prime
* @num: The number to check
*
* Return: 1 if the number is prime, 0 otherwise
*/
int is_prime(unsigned long num)
{
unsigned long i;

if (num <= 1)
return 0;

for (i = 2; i <= sqrt(num); i++)
{
if (num % i == 0)
return 0;
}

return 1;
}

/**
* largest_prime_factor - Find the largest prime factor of a number
* @num: The number to find the largest prime factor for
*
* Return: The largest prime factor of the number
*/
unsigned long largest_prime_factor(unsigned long num)
{
unsigned long i;

for (i = sqrt(num); i >= 2; i--)
{
if (num % i == 0 && is_prime(i))
return i;
}

return num;
}

int main(void)
{
unsigned long number = 612852475143;
unsigned long largest_factor = largest_prime_factor(number);

printf("%lu\n", largest_factor);

return 0;
}
