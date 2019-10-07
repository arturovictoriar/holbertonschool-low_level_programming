#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a character in a string
 * @haystack: is a pointer type char
 * @needle: is a pointer type char
 * Return: The number of bytes repeated
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k, num = 0, cont = 0;

for (k = 0; needle[k] != '\0'; k++)
;

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
if (num == k && haystack[i + 1] != needle[j])
cont++;

if (cont == j)
break;

cont = 0;
}


if (num == 0)
return (0);
else
return (haystack + i - k);
}
