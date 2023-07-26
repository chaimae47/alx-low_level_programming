#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: Pointer to the input string.
*
* Return: Pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;

/* Capitalize the first letter of the string, if it's a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;

while (str[i] != '\0')
{
/* Check for separators and capitalize the next letter */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
else
{
i++;
}
}

return (str);
}
