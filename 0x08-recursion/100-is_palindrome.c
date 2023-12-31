#include "main.h"

/**
* _strlen - Returns the length of a string.
*
* @s: The input string.
* Return: The length of the string.
*/
int _strlen(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen(s + 1));
}

/**
* is_palindrome_recursive-check if a string is a palindrome.
*
* @s: The input string.
* @start: The starting index.
* @end: The ending index.
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
* is_palindrome-Checks if a string is a palindrome using recursion.
*
* @s: The input string.
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome(char *s)
{
int len = _strlen(s);
if (len <= 1)
return (1);

return (is_palindrome_recursive(s, 0, len - 1));
}
