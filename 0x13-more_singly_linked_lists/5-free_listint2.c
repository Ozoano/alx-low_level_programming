#include "lists.h"
/**
 * free_listint2 - a function that frees a list.
 * @head: pointers pointer to the head of list
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
if (!head)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
(*head) = temp;
}
}
