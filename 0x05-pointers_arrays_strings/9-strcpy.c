#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - check the code for Holberton School students.
 * @dest: pointer char type
 * @src: pointer char type
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i, n;

for (n = 0; src != '\0' ; n++)
;

src -= n;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
