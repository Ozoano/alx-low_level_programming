#include "main.h"

/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
for (int i = 0; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
_putchar(' ');
_putchar('\\');
_putchar('\n');
}

}
