#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num, num1;
for (num1 = 0; num1 < 10; num1++)
{
for (num = 0; num < 10; num++)
{
if (num == 0 && num1 == 0)
;
else
{
putchar(',');
putchar(' ');
}
putchar(num1 + '0');
putchar(num + '0');
}
}
putchar ('\n');
return (0);
}
