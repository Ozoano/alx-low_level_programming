#include "lists.h"

/**
 *free_dlistint - free a list
 *@head: pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head;
free(head);
head = tmp;
}

}
