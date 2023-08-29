#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: Pointer to a pointer to the head
* of the linked list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current)
{
count++;
temp = current;
current = current->next;

temp->next = NULL;
free(temp);

if (temp < current)
break;
}

*h = NULL;
return (count);
}
