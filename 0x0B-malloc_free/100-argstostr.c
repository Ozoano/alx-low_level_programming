#include <stdlib.h>
#include "main.h"

/**
* argstostr -concatenates all the arguments of your program.
* @ac: arguements count
* @av: arguements vector
*
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *p;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
len += ac;

p = (char *)malloc(sizeof(char) * (len + 1));
if (p == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
p[k] = av[i][j];
k++;
}
p[k++] = '\n';
}
p[k] == '\0';
return (p);
}
