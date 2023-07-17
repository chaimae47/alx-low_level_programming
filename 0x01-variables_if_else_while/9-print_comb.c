#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
int digit1;

for (digit1 = 0; digit1 <= 9; digit1++)
{
putchar(digit1 + '0');

if (digit1 != 9)
{
putchar(',');

putchar(' ');
}
}

putchar('\n');

return (0);
}
