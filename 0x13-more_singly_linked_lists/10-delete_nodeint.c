#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node
* at a given index of a listint_t linked list.
* @head: Pointer to a pointer to the head
* f the linked list.
* @index: Index of the node that should
* be deleted (starting at 0).
*
* Return: 1 if succeeded, -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head,
unsigned int index)
{
listint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
for (i = 0; i < index - 1 && current != NULL; i++)
current = current->next;

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}