#include <stdio.h>

/**
* main - entry point in c
*
* Return: 0 if successful
*/

int main(void)
{
long a = 1;
long b = 2;
int n = 3;

printf("%li, ", a);
printf("%li, ", b);

while (n < 50)
									{
long fib = a + b;

printf("%li, ", fib);
a = b;
b = fib;
n++;
}

while (n == 50)
{
long fib = a + b;

printf("%li\n", fib);
a = b;
b = fib;
n++;
}

return (0);
}
