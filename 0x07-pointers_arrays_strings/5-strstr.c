#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - locates a character in a string
 * @s: is a pointer type char
 * @accept: is a pointer type char
 * Return: The number of bytes repeated
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, num = 0, cont = 0;


for (i = 0; haystack[i] != '\0'; i++)
{

for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] != needle[j])
continue;

else
{
num++;
break;
}
}

for (j = 0; needle[j] != '\0'; j++)
if (num != 0 && haystack[i + 1] != needle[j])
cont++;

if (cont == j)
break;

cont = 0;
}

return (haystack + i);
}
