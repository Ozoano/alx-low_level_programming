#include <stdio.h>

/**
* main -Entry points
*This prints single digits numbers of base 10 starting from 0
*followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar(10);
return (0);
}

