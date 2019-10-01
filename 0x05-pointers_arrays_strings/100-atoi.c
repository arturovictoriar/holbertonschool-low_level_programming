#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - check the code for Holberton School students.
 * @s: pointer char type
 * Return: Always 0.
 */

int _atoi(char *s)
{
int i = 0, dig = 0, digi = 1, negative = 0, numero = 0, nume;
char num;
printf("%p\n", s);

for (i = 0; *s != '\0'; i++)
{
if (*s == '-')
negative++;

for (num = '0'; num <= '9'; num++)
{
if (*s == num)
dig++;
}
s++;
}
dig--;
printf("%p\n", s);
s -= i;
printf("%p\n", s);
printf("%s\n", s);
for (i = 0; i < dig; i++)
digi *= 10;
printf("%d\n", digi);

while (*s != '\0')
{

for (nume = 0; nume <= 9; nume++)
{
if (*s == (nume + '0'))
{
numero += (nume * digi);
digi /= 10;
printf("Putito\n");
}
}

s++;
}

printf("%p\n", s);

if ((negative % 2) != 0)
numero *= -1;

return (numero);
}
