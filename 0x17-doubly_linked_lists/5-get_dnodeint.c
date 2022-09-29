#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a list
 *@head: pointer to first node
 *@index: node at nth position
*
* Return: node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head && count < index)
{
	head = head->next;
	count++;
}
return (head);
}
