#include "main.h"

/**
*puts_half - Prints half of a string, followed by a new line.
*@str: The string
*/
void puts_half(char *str)
{
int len;
int counter;
for (len = 0; str[len] != '\0'; len++)
{
}
counter = (len + 1) / 2;
while (str[counter])
{
_putchar(str[counter]);
counter++;
}
_putchar('\n');
}
