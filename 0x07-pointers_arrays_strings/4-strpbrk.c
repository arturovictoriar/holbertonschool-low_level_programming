#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - locates a character in a string
 * @s: is a pointer type char
 * @accept: is a pointer type char
 * Return: The number of bytes repeated
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, num = 0;


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

if (num != 0)
break;

}

return (s + i);
}
