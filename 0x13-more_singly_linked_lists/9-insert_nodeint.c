#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: point to the head ref
 * @idx: position to insert node
 * @n: variable
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp;
listint_t *newnode;

if (head == NULL)
return (0);

newnode = malloc(sizeof(listint_t));
if (!newnode)
return (0);

newnode->next = NULL;
newnode->n = n;

if (idx == 0)
{
newnode->next = (*head);
(*head) = newnode;
return (newnode);
}


temp = (*head);

while (idx != 1)
{
temp = temp->next;
--idx;
if (temp == NULL)
{
free(newnode);
return (NULL);
}
}
newnode->next = temp->next;
temp->next = newnode;

return (newnode);
}
