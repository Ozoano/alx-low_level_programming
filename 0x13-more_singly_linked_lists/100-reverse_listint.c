#include "lists.h"
/**
 *reverse_listint -  reverses a listint_t linked list.
 *@head: reference the head of the list
 *
 *Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *ahead;
listint_t *prev = NULL;

if (head == NULL || *head == NULL)
return (NULL);


while ((*head)->next != NULL)
{
ahead = (*head)->next;
(*head)->next = prev;
prev = (*head);
(*head) = ahead;
}
(*head)->next = prev;

return (*head);
}
