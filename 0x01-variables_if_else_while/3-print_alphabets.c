#include <stdio.h>

/**
* main -This prints alphabets in lowercase and in uppercase
* Return: 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar(10);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
return (0);
}


