#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data n of a list
 *@head: pointer to the first node
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *ptr = head;
if (!head)
	return (0);
while (ptr != NULL)
{
	sum += ptr->n;
	ptr = ptr->next;
}
return (sum);

}
