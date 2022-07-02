#include <stdio.h>

/**
* main -Entry points
*This prints all letters in lower case except e and q
*followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if  (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar(10);
return (0);
}

