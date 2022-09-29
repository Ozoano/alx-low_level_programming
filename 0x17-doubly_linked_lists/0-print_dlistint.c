#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - prints all the elements of a list
 * @h: number of element
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;

count++;
}
return (count);
}
