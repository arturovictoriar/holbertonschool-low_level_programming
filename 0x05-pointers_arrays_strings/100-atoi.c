#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - check the code for Holberton School students.
 * @s: pointer char type
 * Return: Always 0.
 */
int _atoi(char *s)
{
int i = 0, dig = 0, digi = 1, check = 0;
int negative = 0, numero = 0, nume, out = 0;
char num;
for (i = 0; *s != '\0'; i++)
{
if (*s == '-')
negative++;
for (num = '0'; num <= '9'; num++)
{
if (*s == num)
{
check = 1;
dig++;
}
else
out++;
}
if (out == 10 && check == 1)
break;
s++;
out = 0;
}
s -= i;
for (i = 0; i < dig - 1; i++)
digi *= 10;
while (*s != '\0')
{
for (nume = 0; nume <= 9; nume++)
{
if (*s == (nume + '0'))
{
numero += (nume * digi);
digi /= 10;
}
}
s++;
}
if ((negative % 2) != 0)
numero *= -1;
return (numero);
}
