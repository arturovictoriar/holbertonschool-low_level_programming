#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - check the code for Holberton School students.
 * @str: pointer int type
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
{
if (i % 2 == 0)
_putchar(*str);
str++;
}
_putchar('\n');
}
