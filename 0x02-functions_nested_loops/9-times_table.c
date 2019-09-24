#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i,j;
for (i=0; i < 10; i++)
{
for (j=0; j < 10; j++)
{
if (i*j>9)
_putchar(((i*j)/10) + '0');
_putchar(((i*j)%10)+ '0');
if (i!=9 || j!=9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
