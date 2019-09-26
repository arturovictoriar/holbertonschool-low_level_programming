#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 * @n: is a int number
 * Return: Always 0.
 */
void print_number(int n)
{
int cont = 0, c, i, num;

if (n == 0)
_putchar(n + '0');

if (n < 0)
{
n *= -1;
_putchar('-');
}

num = n;

while ((num / 10) > 0)
{
num = num / 10;
cont++;
}

while ((n / 10) != 0 || c != 1)
{
c = 1;
for (i = 0; i < cont; i++)
c *= 10;
_putchar((n / c) +'0');
n = n % c;
cont--;
}

}
