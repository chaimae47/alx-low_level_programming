#include "main.h"
#include <stdio.h>

/**
* rev_string - Reverses a string in-place.
* @s: Pointer to the input string.
*/
void rev_string(char *s)
{
int length = 0;
int i, j;
char temp;

while (s[length] != '\0')
{
length++;
}

for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
