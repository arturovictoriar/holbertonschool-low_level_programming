#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long fibo = 0, fiboa = 0, fibob = 0;
unsigned long dos = 1, uno = 0, dosa = 0,  dosb = 0, unoa = 0, unob = 0;

for (i = 0; i < 91; i++)
{
fibo = dos + uno;
printf("%lu, ", fibo);
uno = dos;
dos = fibo;
}
dosa = dos / 10000000000;
unoa = uno / 10000000000;
dosb = dos % 10000000000;
unob = uno % 10000000000;
for (i = 91; i < 98; i++)
{
fiboa = dosa + unoa;
fibob = dosb + unob;
if (fibob > 10000000000)
{
fiboa += 1;
fibob %= 10000000000;
}
printf("%lu%lu", fiboa, fibob);
unoa = dosa;
unob = dosb;
dosa = fiboa;
dosb = fibob;
if (i != 97)
printf(", ");
}
printf("\n");
return (0);
}
