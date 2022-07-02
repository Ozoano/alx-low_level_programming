#include <stdio.h>

/**
* main -Entry points
*This prints alphabets in reverse
*followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
char ch;

for(ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);
return (0);
}


