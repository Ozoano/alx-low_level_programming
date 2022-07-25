#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly alocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: The source string
*
* return: returns a pointer to the duplicate string.
* it returns a NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
char *p;
int n, i;

if (p == NULL)
{
return (NULL);
}

for (n = 0; str[n] != '\0'; n++)

p = (char *)malloc(sizeof(char) * (n + 1));

for (i = 0; i < n; i++)
{
p[i] = str[i];
}
p[n] = '\0';

return (p);
}
