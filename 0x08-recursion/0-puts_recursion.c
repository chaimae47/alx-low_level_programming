#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line, using recursion.
*
* @s: Pointer to the input string.
*/
void _puts_recursion(char *s)
{
/*If the current character is '\0', we have reached the end of the string.*/
if (*s == '\0')
{
_putchar('\n'); /* Print a new line and return the previous recursive call.*/
return;
}
/* Print the current character.*/
_putchar(*s);
/* Recursively call the function with the next character in the string.*/
_puts_recursion(s + 1);
}
