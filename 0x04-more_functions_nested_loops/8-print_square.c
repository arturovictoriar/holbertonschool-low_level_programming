#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: is a int variable
 * Return: Always 0.
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{

for (j = 0; j < size; j++)
_putchar(35);

_putchar('\n');
}
}

else
_putchar('\n');
}
