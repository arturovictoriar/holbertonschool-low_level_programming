#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * @n: is a int variable
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int result, i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] == s2[i])
result = (s1[i] - '0') - (s2[i] - '0');

else
{
result = (s1[i] - '0') - (s2[i] - '0');
break;
}
}

return (result);
}
