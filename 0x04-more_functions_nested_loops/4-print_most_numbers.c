#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
char num;
for (num = 0; num < 10; num++)
{
if (num != 2 && num != 4)
_putchar(num + '0');
}
_putchar('\n');
}
