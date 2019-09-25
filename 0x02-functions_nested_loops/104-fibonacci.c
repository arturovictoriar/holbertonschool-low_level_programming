#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long int fibo = 0, fiboa = 0, fibob =0;
unsigned long int dos = 1, uno = 0, dosa = 0,  dosb =0, unoa = 0, unob = 0;

for (i = 0; i < 91; i++)
{
fibo = dos + uno;
printf("%ld, ", fibo);

uno = dos;
dos = fibo;
}

dosa = 
printf("\n");
return (0);
}
