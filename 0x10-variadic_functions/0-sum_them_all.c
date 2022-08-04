#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: How many variables will be inserted in the function
 *
 * Return: returns the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list a;
unsigned int i;
unsigned int sum = 0;

va_start(a, n);

if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++)
{
sum += va_arg(a, int);
}

va_end(a);
return (sum);
}
