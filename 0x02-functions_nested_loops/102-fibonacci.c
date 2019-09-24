#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int num1 = 1, num2 = 1, num3 = 1;
for (i = 0; i < 50; i++)
{
printf("%ld\n", num3);
num3 = num2 + num1;
num1 = num2;
num2 = num3;
}
return (0);
}
