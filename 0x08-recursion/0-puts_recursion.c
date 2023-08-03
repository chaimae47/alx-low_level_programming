#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line, using recursion.
*
* @s: Pointer to the input string.
*/
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: If the current character is '\0', we have reached the end of the string.*/
{
_putchar('\n'); /* Print a new line and return to the previous recursive call.*/
return;
}

_putchar(*s); /* Print the current character.*/
_puts_recursion(s + 1); /* Recursively call the function with the next character in the string.*/
}
