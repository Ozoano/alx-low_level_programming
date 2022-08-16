#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list.
 * @h: the head list
 *
 * Return: a pointer to node
 */
size_t listint_len(const listint_t *h)
{
int len = 0;
while	(h)
{
h = h->next;
len++;
}
return (len);
}
