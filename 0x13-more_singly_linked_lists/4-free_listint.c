#include "lists.h"
/**
 * free_listint - a function that frees a list.
 *@head: pointer to head of a list
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
