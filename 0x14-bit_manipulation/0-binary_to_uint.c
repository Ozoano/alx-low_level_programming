#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string
 *
 * Return:  the converted numbe or zero
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int i, res = 0;

if (!b)
return (0);

 for (i = 0; b[i]; i++)
 {
 if (b[i] < '0' || b[i] > '1')
 {
 return (0);
 }
 else
 {
 res = res << 1;
 res |= (b[i] - '0');
 }
 }

 return (res);
}
