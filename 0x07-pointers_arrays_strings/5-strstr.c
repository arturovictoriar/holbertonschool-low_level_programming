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
int i, num = 0, cont;

for (cont = 0; needle[cont] != '\0'; cont++)
;

for (; *haystack != '\0'; haystack++)
{
if (*haystack == needle[0])
{
num++;
haystack++;
for (i = 1; i < cont; i++, haystack++)
{
if (*haystack == needle[i])
num++;

else
{
haystack--;
num = 0;
break;
}

}
}

if (num == cont)
break;

}


if (num == cont)
return (haystack - cont);
else
return (0);
}
