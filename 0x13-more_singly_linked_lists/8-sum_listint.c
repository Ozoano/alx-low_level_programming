#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: head of a list
 *
 * Return: sum of all the data. 0 if not exist
 */

int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
