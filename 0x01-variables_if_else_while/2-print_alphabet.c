#include <stdio.h>

/**
* main -Entry points
*This prints alphabets in lowercase
*followed by a new line
*Return: 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}

