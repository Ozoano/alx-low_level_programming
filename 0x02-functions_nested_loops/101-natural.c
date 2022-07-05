#include <stdio.h>

/**
* main - entry point
*
* Return: 0 if successful
*/

int main(void)
{
int mult = 0;
int sum = 0;

while (mult < 1024)
{
if (mult % 3 == 0 || mult % 5 == 0)
{
sum += mult;
}
mult++;
}
printf("%d\n", sum);
return (0);
}
