#include "variadic_functions.h"
void sepa(int a);
/**
  * print_strings - fills memory with a constant byte
  * @separator: is string
  * @n: the amount of args
  * Return: nothing
  */

void print_all(const char * const format, ...)
{
	va_list gett;
	int i, j;
	op_t o[] = {
		{"c", char},
		{"i", int},
		{"f", float},
		{"s", char *},
	};

	va_start(gett, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (strcmp(x[i], o[i].p) == 0 && j == 0;)
		{
			if (va_arg(cg, o[i].f) != NULL)
			{
				printf(" ", va_arg(gett, o[i].f));
				sepa(x[i + 1]);
				j = 1;
				continue;
			}
		printf("nil");
		sepa(x[i + 1]);
		j = 1;
		}
		i++;
	}




	printf("\n");
}
void ch(char a)
{
	printf("%c", a);
}
void in(int a)
{
	printf("%d", a);
}
void fl(float a)
{
	printf("%f", a);
}
void cha(char *a)
{
	printf("%s", a);
}
void sepa (char a)
{
	if (a != '\0')
		printf(", ");
}
