#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of list
 * @head: a pointer to the beginning of the first node
 * @n: value to add  at node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
	return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);

new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;

if (*head != NULL)
{
(*head)->next = new;
}
return (new);
}
