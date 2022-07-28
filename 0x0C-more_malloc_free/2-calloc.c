#include "main.h"
/**
 * _calloc - function to allocates memory
 *@nmemb: unsigned int type
 *@size: unsigned int type
 *
 *Return:  a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *p;
    unsigned int count, length;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }

    length = nmemb * size;
    p = malloc(length);
    if (p == NULL)
    {
        return (NULL);
    }
    count = 0;
    while (count < length)
    {
        p[count] = 0;
        count++;
    }

    return (p);
}
