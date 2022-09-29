#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head: double pointer to the start of the node
 * @n: element to be added at the end of the node
 *
 * Return: new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;
if (head == NULL)
	return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);

temp = *head;
new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

while (temp->next != NULL)
	temp = temp->next;

temp->next = new;
new->prev = temp;

return (new);
}
