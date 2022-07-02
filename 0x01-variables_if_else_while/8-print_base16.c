#include <stdio.h>

/**
* main -Entry points
*This prints all numbers of base 16 in lowercase
*followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
int n;
char ch;

for (n = 48; n <= 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}


