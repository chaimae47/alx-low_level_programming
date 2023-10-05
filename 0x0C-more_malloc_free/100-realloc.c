#include <stddef.h>
#include <stdlib.h>

/**
* _realloc - Reallocates a memory block
* @ptr: Pointer to the memory previously allocated with malloc
* @old_size: Size of the allocated space for ptr
* @new_size: New size of the memory block
*
* Return: A pointer to the reallocated memory block,
or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size,
unsigned int new_size)
{
void *new_ptr;

if (new_size == 0 && ptr != NULL) {
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

if (new_size == old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
