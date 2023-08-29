#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t
* linked list.
* @head: Pointer to the head of the linked list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow = head, *fast = head;

while (fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
break;
}
}

while (slow)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
}

return (count);
}
