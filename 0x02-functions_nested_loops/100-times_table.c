#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
int i,j;
if (n<0 || n>15)
;
else
{
for (i=0; i <= n; i++)
{
for (j=0; j <= n; j++)
{
if (i*j>99)
_putchar(((i*j)/10)/10 + '0');
if (i*j>9)
_putchar(((i*j)/10)%10 + '0');
_putchar(((i*j)%10)+ '0');
if (j != n)
{
_putchar(',');
if (!(i*(j+1) > 99))
_putchar(' ');
if (!(i*(j+1) > 9))
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
_putchar('\n');
}
