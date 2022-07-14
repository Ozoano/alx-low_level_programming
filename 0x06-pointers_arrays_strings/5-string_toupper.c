#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: The string
 *
 * Return: The string
 */
char *string_toupper(char *str)
{
int i = 0, j = 'a' - 'A';
  
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= j;
i++;
}
  
 return (str);
}
