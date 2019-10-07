#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: is a pointer type char
 * @c: is a variable type char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != c && s[i] != '\0'; i++)
;

if (s[i] != c)
return (0);

else
s = s + i;

return (s);
}
