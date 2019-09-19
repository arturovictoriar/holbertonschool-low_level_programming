#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
if (num == 9)
putchar(num + '0');
else
{
putchar(num + '0');
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
