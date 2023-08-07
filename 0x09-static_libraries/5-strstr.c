#include <stddef.h>
/**
* _strstr - finds the first occurrence 
*of the substring needle in the string haystack
* @haystack: pointer to the string to search
* @needle: pointer to the substring to find
*
* Return: pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *haystack_ptr, *needle_ptr;

while (*haystack != '\0')
{
haystack_ptr = haystack;
needle_ptr = needle;

while (*haystack_ptr != '\0' && *needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
{
haystack_ptr++;
needle_ptr++;
}

/* If we reach the end of the needle, it means we found a match*/
if (*needle_ptr == '\0')
return haystack;

/* Move to the next character in the haystack*/
haystack++;
}

return (NULL);
}
