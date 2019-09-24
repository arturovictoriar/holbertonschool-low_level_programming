#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n>=98)
{
for (n=n; n>=98; n--)
{
if (n> 99)
_putchar(((n/10)/10)+'0');
_putchar(((n/10)%10)+'0');
_putchar((n%10)+ '0');
if(n!=98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (n=n; n <= 98; n++)
{
if (n> 9)
_putchar((n/10)+ '0');
_putchar((n%10)+ '0');
if(n!=98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
