#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - Allocate memory using
* malloc and check for success
* @b: Number of bytes to allocate
*
* Return: A pointer to the allocated memory
* If malloc fails, exits with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
