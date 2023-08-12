#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - Concatenates two strings up
* to n bytes of the second string.
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes to concatenate from s2.
*
* Return: Pointer to the concatenated string, or NULL on failure.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
unsigned int concat_len = 0;
char *concat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

concat_len = len1 + n + 1;

concat = malloc(sizeof(char) * concat_len);
if (concat == NULL)
return (NULL);

unsigned int i;
for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (unsigned int j = 0; j < n; j++, i++)
concat[i] = s2[j];

concat[concat_len - 1] = '\0';

return (concat);
}
