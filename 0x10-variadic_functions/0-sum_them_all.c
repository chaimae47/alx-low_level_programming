#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of parameters.
* @...: The variadic arguments.
*
* Return: The sum of the parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;

if (n == 0)
return (0);

va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}

int main(void)
{
int sum;

sum = sum_them_all(2, 98, 1024);
printf("%d\n", sum);
sum = sum_them_all(4, 98, 1024, 402, -1024);
printf("%d\n", sum);

return (0);
}
