#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
long number = 612852475143;
long i;

for (i = 2; i * i <= number; i++)
{
while (number % i == 0)
{
number /= i;
}
}

if (number > 1)
{
printf("%ld\n", number);
}
else
{
printf("There is no prime factor other than 1.\n");
}

return (0);
}
