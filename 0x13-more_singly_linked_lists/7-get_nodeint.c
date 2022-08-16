#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list.
 * @head: head of a list
 * @index: index of the node
 *
 *Return: nth node. if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL && i < index; i++)
head = head->next;

return (head);
}
