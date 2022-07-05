#include "main.h"

/**
*print_alphabet_x10 - print the alphabet in lowercase.
*followed by a new line
*Return: 0 (success)
*/

void print_alphabet_x10(void)
{
char letter = 'a';
int number = 1;

while (number < 11)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
letter = 'a';
number++;
}
}

