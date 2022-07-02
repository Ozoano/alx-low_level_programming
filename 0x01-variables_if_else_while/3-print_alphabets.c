#include <stdio.h>

/**
* main -This prints alphabets in lowercase and in uppercase
return: 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar(0);
return (0);
}


