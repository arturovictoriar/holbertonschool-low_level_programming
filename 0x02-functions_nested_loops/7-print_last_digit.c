#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @c: is a int variable
 * Return: lastdig
 */
int print_last_digit(int c)
{
int lastdig;

if (c < 0)
lastdig = c * -1;
else
lastdig = c;

lastdig = lastdig % 10;

_putchar(lastdig + '0');
return (lastdig);
}
