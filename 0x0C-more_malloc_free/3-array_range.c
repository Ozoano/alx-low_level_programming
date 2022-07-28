#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: int type
 * @max: int type
 * @return: pointer to array
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
