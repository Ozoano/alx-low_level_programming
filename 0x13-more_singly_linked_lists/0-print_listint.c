#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: reference to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t  len = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
len++;
}
return (len);
}
