#include "main.h"

/**
* print_two_digits - Prints a two-digit number with leading zeros.
* @n: The number to print.
*/
void print_two_digits(int n)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}

/**
* jack_bauer - Prints every minute of the day of Jack Bauer.
*/
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
print_two_digits(hour);
_putchar(':');
print_two_digits(minute);
_putchar('\n');
}
}
}
