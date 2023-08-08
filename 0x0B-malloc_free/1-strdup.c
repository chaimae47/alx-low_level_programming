#include <stdlib.h>

/**
* _strdup - Duplicates a string using memory allocation.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string,
* or NULL if allocation fails or str is NULL.
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;

if (str == NULL)
return (NULL);

/* Calculate the length of the input string */
while (str[length] != '\0')
length++;

/* Allocate memory for the duplicated string(+1 for the null terminator)*/

duplicate = (char *)malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

/* Copy the contents of the input string to the duplicated string */

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
