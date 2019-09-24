#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @c: is a int variable
 * Return: Always 0.
 */
int print_last_digit(int c)
{
int lastdig;
lastdig = c * -1;

lastdig = lastdig % 10;

_putchar(lastdig + '0');
return (lastdig);
}
