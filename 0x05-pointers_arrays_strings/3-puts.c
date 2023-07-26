#include "main.h"
#include <stdio.h>

int _putchar(char c);
/**
* _puts - Prints a string followed by a new line to stdout.
* @str: Pointer to the input string.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str); 
str++;
}
_putchar('\n'); 
}
