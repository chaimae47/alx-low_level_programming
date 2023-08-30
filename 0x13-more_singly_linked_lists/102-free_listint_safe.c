#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
* free_listint_safe - Frees a listint_t
* linked list safely
* @h: Pointer to a pointer to the beginning
* of the list
*
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *temp;

while (*h != NULL)
{
count++;
if (*h > (*h)->next)
{
temp = (*h)->next;
free(*h);
*h = temp;
}
else
{
free(*h);
*h = NULL;
break;
}
}
return (count);
}
