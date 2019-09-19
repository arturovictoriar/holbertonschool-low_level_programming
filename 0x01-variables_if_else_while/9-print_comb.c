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
if (num == 0)
;
else
{
putchar(',');
putchar(' ');
}
putchar(num + '0');
}
putchar ('\n');
return (0);
}
