#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: is a int variable
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n >= 98)
{
for (n = n; n >= 98; n--)
{
if (n > 99)
printf("%d",(n / 10) / 10);
printf("%d",(n / 10) % 10);
printf("%d",(n % 10));
if (n != 98)
{
printf(",");
printf(" ");
}
}
}
else
{
for (n = n; n <= 98; n++)
{
if (n < 0)
{
printf("-");
if (n < -9)
printf("%d",(abs(n) / 10));
printf("%d",(abs(n) % 10));
}
else
{
if (n > 9)
printf("%d",(n / 10));
printf("%d",(n % 10));
}
if (n != 98)
{
printf(",");
printf(" ");
}
}
}
printf("\n");
}
