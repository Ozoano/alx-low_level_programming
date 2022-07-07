#include "main.h"
#include<stdio.h>
#include<ctype.h>
/**
*_isdigit - This function checks for a digit, 0 through 9
*@c: tested character
*Return: returns 1 if it is a digit , 0 if not
*/

int _isdigit(int c)
{
if (isdigit(c))
return (1);

return (0);
}
