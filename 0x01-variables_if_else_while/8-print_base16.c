#include <stdio.h>

/**
* main -Entry points
*This prints all numbers of base 16 in lowercase
*followed by a new line
*return 0 (Success)
*/
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
putchar(10);
return (0);
}


