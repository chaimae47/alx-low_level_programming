#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node
* of a listint_t linked list.
* @head: Pointer to the head of the linked list.
* @index: Index of the desired node, starting from 0.
*
* Return: Pointer to the nth node,
* or NULL if the node doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head,
unsigned int index)
{
unsigned int i;
listint_t *current;

current = head;

for (i = 0; i < index && current != NULL; i++)
current = current->next;

return (current);
}
