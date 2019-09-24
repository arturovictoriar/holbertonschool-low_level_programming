#include "holberton.h"
#include "stdlib.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int c)
{
int lastdig;
lastdig = abs(c);

lastdig=lastdig%10;

_putchar(lastdig + '0');
return (lastdig);
}
