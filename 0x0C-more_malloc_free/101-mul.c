#include "holberton.h"

/**
 * mul_each_dig - multiply each digit of each number to make an addition
 * @a: digit 1
 * @index_a: index of the digit 1 in the number string representation
 * @b: digit 2
 * @index_b: index of the digit 2 in the number string representation
 * @len_r: Total space to save the new addition
 * @n: the node multiplication
 * Return: An addition pointer with the addition information
 */
add_t *mul_each_dig(char a, int index_a, char b, int index_b, int len_r,
		add_t *n)
{
	add_t *new_a = NULL;
	int mul = 0, i = 0;

	if (!n)
		new_a = malloc(sizeof(add_t));
	else
		new_a = n;

	new_a->next = NULL, new_a->n_dig = 0, new_a->len_r = len_r;
	if (!n)
		new_a->n_add = malloc(sizeof(char) * len_r);

	for (i = 0; i < len_r; i++)
		new_a->n_add[i] = '0';

	mul = (a - '0') * (b - '0');
	i = len_r - 1 - (index_a + index_b);
	new_a->n_dig = index_a + index_b;
	while (mul)
	{
		new_a->n_add[i] = (mul % 10) + '0';
		new_a->n_dig++;
		mul /= 10;
		i--;
	}

	return (new_a);
}

/**
 * adding_all_mul - sum all the addition to know the multiplication result
 * @head: linked list representation of a set of additions
 * @r: result node multiplication
 * Return: Addition pointer to the total resul of the  multiplication
 */
add_t *adding_all_mul(add_t *head, add_t *r)
{
	add_t *result = NULL;
	int i = 0, carry = 0;

	if (!r)
	{
		result = malloc(sizeof(add_t));
		result->next = NULL, result->n_dig = 0, result->len_r = head->len_r * 2;

		result->n_add = malloc(sizeof(char) * (head->len_r * 2));

		for (i = 0; i < (head->len_r * 2); i++)
			result->n_add[i] = '0';
	}
	else
		result = r;
	while (head)
	{
		if (head->n_dig)
		{
			i = 0;
			while (i < head->n_dig || carry)
			{
				if (i < head->n_dig)
					carry += head->n_add[head->len_r - 1 - i] - '0';
				carry += result->n_add[result->len_r - 1 - i] - '0';
				result->n_add[result->len_r - 1 - i] = (carry % 10) + '0';
				carry /= 10;
				i++;
			}
			if (i > result->n_dig)
				result->n_dig = i;
		}
		head = head->next;
	}
	return (result);
}

/**
 * print_free_result - print the result of the multiplication and free all
 * @result: Addition pointer to the total resul of the  multiplication
 * Result: Nothing
 */
void print_free_result(add_t *result)
{
	int i = 0, start_n = 0;

	i = 0;
	while (i < result->n_dig)
	{
		if (start_n || result->n_add[result->len_r - result->n_dig + i] != '0')
		{
			_putchar(result->n_add[result->len_r - result->n_dig + i]);
			start_n = 1;
		}
		i++;
	}
	if (!result->n_dig || !start_n)
		_putchar('0');
	_putchar('\n');
	free(result->n_add);
	free(result);
}

/**
 * error_message - print an error message and exit with status 98
 * Return: Nothing
 */
void error_message(void)
{
	char error_msg[] = "Error";
	int i = 0;

	while (error_msg[i] != '\0')
	{
		_putchar(error_msg[i]);
		i++;
	}

	_putchar('\n');

	exit(98);
}

/**
 * main - multiply 2 long numbers
 * usage <> ./mul num1 num2
 * @ac: number of arguments
 * @av: list of arguments
 * Return: 0 on success, another number otherwise
 */
int main(int ac, char **av)
{
	char *a = NULL, *b =  NULL;
	int i = 0, len_a = 0, len_b = 0, is_a = 1, is_b = 1, len_r = 0, j = 0;
	add_t *n = NULL, *result = NULL;

	if (ac != 3)
		error_message();
	for (i = 0, a = av[1], b = av[2]; is_a == 1 || is_b == 1; i++)
	{
		if (is_a == 1 && a[i] == '\0')
			is_a = 0, len_a = i;
		if (is_b == 1 && b[i] == '\0')
			is_b = 0, len_b = i;
		if ((is_a == 1 && (a[i] < '0' || a[i] > '9')) ||
				(is_b == 1 && (b[i] < '0' || b[i] > '9')))
			error_message();
	}
	if (len_a == 0 || len_b == 0)
		error_message();
	len_r = len_a + len_b;
	if (len_a > len_b)
		a = av[2], b = av[1], len_a = len_b, len_b = len_r - len_b;
	for (i = len_a - 1; i >= 0; i--)
	{
		for (j = len_b - 1; j >= 0; j--)
		{
			n = mul_each_dig(a[i], len_a - 1 - i, b[j], len_b - 1 - j, len_r, n);
			result = adding_all_mul(n, result);
		}
	}
	if (n)
	{
		free(n->n_add);
		free(n);
	}
	print_free_result(result);

	return (0);
}
