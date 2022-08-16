#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list.
 * @h: the head list
 *
 * Return: a pointer to node
 */
size_t listint_len(const listint_t *h)
{
int i, len = 0;
for (i = 0; h != '\0'; i++)
{
h = h->next;
len++;
}
return (len);
}
