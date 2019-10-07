#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * @n: is a int variable
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
