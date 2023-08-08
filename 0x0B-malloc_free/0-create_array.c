#include <stdlib.h>

/**
* create_array - Creates an array of characters
* and initializes it with a specific character.
* @size: The size of the array to create.
* @c: The character to initialize the array with.
*
* Return: A pointer to the created array,
* or NULL if allocation fails or size is 0.
*/
char *create_array(unsigned int size, char c)
{
char *array;

/* Check if size is 0 */
if (size == 0)
return (NULL);

/* Allocate memory for the array */
array = (char *)malloc(size * sizeof(char));

/* Check if memory allocation was successful */
if (array == NULL)
return (NULL);

/* Initialize the array with the specified character */
{
unsigned int i;

for (i = 0; i < size; i++)
array[i] = c;
}

return (array);
}
