#include "variadic_functions.h"

/**
  * print_strings - fills memory with a constant byte
  * @separator: is string
  * @n: the amount of args
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list gett, cgett;
	unsigned int i;

	va_start(gett, n);
	va_copy(cgett, gett);

	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(cgett, char *) != NULL)
			printf("%s", va_arg(gett, char *));
		else
		{
			va_arg(gett, char *);
			printf("%s", "(nil)");
		}
		if (separator != NULL)
			printf("%s", separator);
	}
	if (va_arg(cgett, char *) != NULL)
		printf("%s", va_arg(gett, char *));
	else
	{
		va_arg(gett, char *);
		printf("%s", "(nil)");
	}
	va_end(cgett);
	va_end(gett);
	printf("\n");
}
