#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 *  and returns the head node’s data (n).
 * @head: pointer reference to head of list
 *
 * Return: head node data if successful, 0 if empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int i;

if (*head == NULL)
return (0);

else
{
i = (*head)->n;
temp = (*head)->next;
free(*head);
(*head) = temp;
}
return (i);
}
