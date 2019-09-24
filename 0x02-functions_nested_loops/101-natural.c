#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{

int i, num;

for (i = 1; i <= 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
num = num + i;
}
printf("%d\n", num);
return (0);
}
