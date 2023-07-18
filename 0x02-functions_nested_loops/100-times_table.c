#include "main.h"

/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The number of rows and columns in the times table.
*
* Return: void
*/

void print_times_table(int n)
{
if (n > 15 || n < 0)
return;

int row, column, result;

for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = row * column;

if (column != 0)
{
_putchar(',');
_putchar(' ');
}

if (result < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result < 100)
{
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
else
{
_putchar('0' + result / 100);
_putchar('0' + (result / 10) % 10);
_putchar('0' + result % 10);
}
}
_putchar('\n');
}
}

