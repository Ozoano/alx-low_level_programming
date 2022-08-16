#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: the head of a list
 * @n: number if elements
 *
 * Return:
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *temp;

newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->next = NULL;

temp = *head;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}

while (temp->next)
{
temp = temp->next;
}
temp->next = newnode;

return (*head);
}
