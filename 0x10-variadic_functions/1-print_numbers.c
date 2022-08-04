#include "variadic_functions.h"
/**
 *  print_numbers -  a function that prints numbers.
 *  followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list a;
unsigned int i;

separator = (separator == NULL) ? "" : separator;

va_start(a, n);
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf("%s", separator);
}

printf("%d", va_arg(a, int));
}

va_end(a);
putchar('\n');
}
