#include "holberton.h"
/**
  * print_binary - fills memory with a constant byte
  * @n: is the size of the pointer
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int condif = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	condif = condif << 63;
	for (; !(n & condif); )
		condif = condif >> 1;

	for (; condif; )
	{
		_putchar(n & condif ? '1' : '0');
		condif = condif >> 1;
	}
}
