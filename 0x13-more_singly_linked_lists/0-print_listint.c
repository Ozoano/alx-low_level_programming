#include "lists.h"
/**
 * print_listint - prints all the elements of a list.
 *
 * @h: head of a list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int i, len = 0;

for (i = 0; h != '\0'; i++)
{
printf("%d\n", h->n);
h = h->next;
len += 1;
}

return (len);
}
