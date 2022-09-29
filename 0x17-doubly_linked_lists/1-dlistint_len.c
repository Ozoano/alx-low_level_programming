#include "lists.h"
#include <stdio.h>
/**
 *dlistint_len - returns the number of elements in a  list
* @h: number of element
*
* Return: number of element in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
	h = h->next;
	count++;
}
return (count);
}
