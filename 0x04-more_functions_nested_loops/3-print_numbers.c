#include "main.h"
#include <unistd.h> /* Include the header for the write system call */

/**
 * _putchar - Custom putchar function
 * @c: Character to be printed
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1); /* Use the write system call to print the character */
}

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
    char num;

    for (num = '0'; num <= '9'; num++)
    {
        _putchar(num);
    }

    _putchar('\n');
}

