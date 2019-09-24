#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int num1 = 0, num2 = 1, num3 = 0, sum = 0;
for (i = 0; i < 40; i++)
{
num3 = num2 + num1;
num1 = num2;
num2 = num3;
if ((num3 <= 4000000) && (num3 % 2 == 0))
sum = sum + num3;
}
printf("%ld\n", sum);
return (0);
}
