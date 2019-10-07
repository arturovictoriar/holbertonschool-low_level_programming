#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - locates a character in a string
 * @s: is a pointer type char
 * @accept: is a pointer type char
 * Return: The number of bytes repeated
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, num = 0, cont = 0;


for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] != accept[j])
continue;

else
{
num++;
break;
}
}

for (j = 0; accept[j] != '\0'; j++)
if (num != 0 && s[i + 1] != accept[j])
cont++;

if (cont == j)
break;

cont = 0;
}

return (num);
}
