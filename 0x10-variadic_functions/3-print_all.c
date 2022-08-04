#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
va_list a;
int p = 0;
char *s;
char *sep = ", ";

va_start(a, format);

while ((format != NULL) && *(format + p) != '\0')
{
switch (*(format + p))
{
case 's': /* string */
s = va_arg(a, char *);
s = (s == NULL) ? "(nil)" : s;
printf("%s", s);
break;
case 'i': /* int */
printf("%i", va_arg(a, int));
break;
case 'c': /* char */
/* need a cast here since va_arg only takes fully promoted types */
printf("%c", va_arg(a, int));
break;
case 'f': /* float */
printf("%f", va_arg(a, double));
break;

default: /* if it does not comply with any of the cases */
p++;
continue;
}

if (*(format + p + 1) != 0)
{
printf("%s", sep);
}
p++;
}
putchar(10);
va_end(a);
}
