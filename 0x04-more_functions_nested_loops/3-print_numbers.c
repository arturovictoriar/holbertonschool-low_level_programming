#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
char num;
for (num = 0; num < 10; num++)
_putchar(num + '0');
_putchar('\n');
}
