#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @c: is a int variable
 * Return: lastdig
 */
int print_last_digit(int c)
{
int lastdig = c % 10;

if (lastdig < 0)
lastdig = lastdig * (-1);

_putchar(lastdig + '0');
return (lastdig);
}
