#include "variadic_functions.h"
/**
 *  print_strings - a function that prints strings
 *  followed by a new line.
 *
 * @separator: string printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list a;
unsigned int i;
char *p;

separator = (separator == NULL) ? "" : separator;

va_start(a, n);
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf("%s", separator);
}

p = va_arg(a, char *);

if (p == NULL)
{
printf("(nil)");
}
else
{
printf("%s", p);
}
}

va_end(a);
putchar('\n');
}
