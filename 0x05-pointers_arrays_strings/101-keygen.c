#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for Holberton School students.
 * 
 * Return: Always 0.
 */
int main(void)
{
int add, i, r;

char seed[62] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char password[40];
int n, passw;

srand(time(0));

for (i = 0; passw < 2772; i++)
{
n = rand() % 10;
password[i] = seed[n];
passw += password[i];
}
complem = 2772 - passw;
password[i] = complem;
printf("%s\n",  password);
return (0);
}
