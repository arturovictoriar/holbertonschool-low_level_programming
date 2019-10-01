#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - check the code for Holberton School students.
 * @*s: is a pointer int type
 * Return: Always 0.
 */
void print_rev(char *s)
{
int len;

for (len = 0; len < 100 ; len++)
{
printf("%p %c\n", s, *s);
s++;
}

for (len = len; len == 0; len--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
