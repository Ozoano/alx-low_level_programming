#include "main.h"
/**
* array_range - creates an array of integers.
* @min: min number
* @max: max number
*Return: pointer to array
*return NULL if malloc fails or min > max
*/

int *array_range(int min, int max)
{
int *p, arr;
if (min > max)
{
return (NULL);
}

p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
{
return (NULL);
}

arr = 0;
while (min <= max)
{
p[arr] = min;
arr++;
min++;
}

return (p);
}
