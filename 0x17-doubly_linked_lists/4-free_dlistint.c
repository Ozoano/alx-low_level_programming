#include "lists.h"

/**
 *free_dlistint - free a list
 *@head: pointer to the first node
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}

}
