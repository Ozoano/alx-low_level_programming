#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - concatenates two strings.
* @s1: first string
* @s2: second string
*
* Return: a pointer to a newly allocated space in memory which
* contains the contents of s1, followed by the contents of s2,
* and null terminated. NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
int i, j;
int len, len1, len2;
char *p;

len1 = len2 = 0;

if (s1 != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
len1++;
}

if (s2 != NULL)
{
for (i = 0; s2[i] != '\0'; i++)
len2++;
}

len = len1 + len2;
p = (char *)malloc(len * sizeof(char) + 1);
if (p == NULL)
{
return NULL;
}

for (i = 0; i < len1; i++)
{
p[i] = s1[i];
}

for (j = 0; j < len2; j++, i++)
{
p[i] = s2[j];
}
p[len] = '\0';

return (p);
}
