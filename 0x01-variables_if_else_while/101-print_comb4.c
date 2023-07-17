#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
int hundredsDigit;

for (hundredsDigit = 0; hundredsDigit <= 7; hundredsDigit++)
{
int tensDigit;

for (tensDigit = hundredsDigit + 1; tensDigit <= 8; tensDigit++)
{
int onesDigit;

for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
{
putchar(hundredsDigit + '0');
putchar(tensDigit + '0');
putchar(onesDigit + '0');

if (hundredsDigit != 7 || tensDigit != 8 || onesDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
