#include "main.h"

/**
* _islower - checks for lowercase character.
*@c: character to check for lowercase letter
*
*Return: (1) if c is lowercase, (0) if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
