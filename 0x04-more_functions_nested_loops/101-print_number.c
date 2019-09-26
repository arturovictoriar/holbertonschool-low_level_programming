#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 * @n: is a int number
 * Return: Always 0.
 */

void print_number(int n)
{

if (n < 0)
{
n *= -1;

_putchar('-');

if (n > 9)
_putchar(((n / 10) % 10) + '0');

_putchar(n % 10 + '0');

}

else
{
if (n > 999)
_putchar((((n / 10) / 10) / 10) + '0');

if (n > 99)
_putchar((((n / 10) / 10) % 10) + '0');

if (n > 9)
_putchar(((n / 10) % 10) + '0');

_putchar(n % 10 + '0');
}
}
