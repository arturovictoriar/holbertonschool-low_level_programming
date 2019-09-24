#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @c: is a int variable
 * Return: Always 0.
 */
int _isalpha(int c)
{
char i, j;
for (i = 'a'; i < 'z'; i++)
{
if (c == i)
return (1);
}
for (j = 'A'; j < 'Z'; j++)
{
if (c == j)
return (1);
}
return (0);
}
