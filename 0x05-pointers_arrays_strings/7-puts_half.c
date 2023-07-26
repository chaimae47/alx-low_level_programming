#include "main.h"
#include <stdio.h>
/**
* puts_half - Prints the second half of a string, followed by a new line.
* @str: Pointer to the input string.
*/
void puts_half(char *str)
{
int length = 0;
int i, start;
while (str[length] != '\0')
{
length++;
}
start = (length - 1) / 2 + 1;
for (i = start; i < length; i++)
{
putchar(str[i]);
}
putchar('\n'); 
}
