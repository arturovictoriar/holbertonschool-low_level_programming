#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 *
 * @c: is a variable int
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
char i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
return (1);
}
return (0);
}
