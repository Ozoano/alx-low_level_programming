#include "main.h"

/**
*_strcpy - opies the string pointed to by src,
*including the terminating null byte
* to the buffer pointed to by des
* @dest: The destination
* @src: The source
*
* Return: The pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
for ( i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
