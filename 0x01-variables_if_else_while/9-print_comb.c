#include <stdio.h>

/**
* main -Entry points
*This prints possible numbers of single digits
*followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(' ');
putchar(',');
}
}
putchar('\n');
return (0);
}


