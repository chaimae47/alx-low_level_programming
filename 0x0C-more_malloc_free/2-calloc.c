#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array
* of nmemb elements of size bytes each.
* @nmemb: Number of elements in the array.
* @size: Size of each element in bytes.
*
* Return: Pointer to the allocated memory, or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return NULL;

// Set memory to zero using memset
memset(ptr, 0, nmemb * size);

return (ptr);
}
