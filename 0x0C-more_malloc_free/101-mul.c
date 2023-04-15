#include <stdlib.h>
#include "main.h"
/**
 * error - prints error messasge
 */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * all_digits - checks if value is a number
 *
 * Return: returns 1 if value is a number and 0 otherwise
 */
int all_digits(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * my_calloc - allocate memory and initialize to 0
 * @nmemb: Number of element
 * @size: size of element
 *
 * Return: returns 0 if size or nmemb is 0 or pointer to memory
 */
void *my_calloc(size_t nmemb, size_t size)
{
	void *ptr = malloc(nmemb * size);
	size_t i;

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}

/**
 * str_len - calculates length of string
 *
 * Return: returns lenght of string
 */
int str_len(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}

int *convert_string_to_array(char *str, int len)
{
	int *arr;
	int i;

	arr = (int *)my_calloc(len, sizeof(int));
	if (arr == NULL)
		error();

	for (i = len - 1; i >= 0; i--)
	{
		*(arr + len - 1 - i) = *(str + i) - '0';
	}
	return (arr);

}
/**
 * multiply_arrays- multiply two integer
 * @a: the first integer
 * @b: the second integer
 * @len_s1: length of the first integer
 * @len_s2: length of the second integer
 * @ans: the results
 */
void multiply_arrays(int *a, int *b, int len_s1, int len_s2, int *ans)
{
	int i, j;

	for (i = 0; i < len_s1; i++)
	{
		for (j = 0; j < len_s2; j++)
		{
			*(ans + i + j) += *(a + i) * *(b + j);
		}
	}
}
/**
 * carry_over - carries over digitz in the array
 *
 * @ans: the array to be carried over
 * @len: the length of the array
 *
 * Returns: void
 */
void carry_over(int *ans, int len)
{
	int i;

	for (i = 0; i < len - 1; i++)
	{
		if (*(ans + i) >= 10)
		{
			*(ans + i + 1) += *(ans + i) / 10;
			*(ans + i) %= 10;
		}
	}
}

/**
 * print_array - prints an integer array
 * @ans: pointer to the integer array
 * @len: length of the array
 */
void print_array(int *ans, int len)
{
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(ans + i) + '0');
	}
	_putchar('\n');
}

/**
 * main - multiplies two numbers passed as argument
 *
 * @argc: the number of commands passed
 * @argv: an array of arguments passed
 *
 * Returns: returns 0 as success or 98 as error
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len_s1, len_s2;
	int len, *a, *b, *ans;

	if (argc != 3 || !all_digits(argv[1]) || !all_digits(argv[2]))
	{
		error();
	}

	s1 = argv[1], s2 = argv[2];
	len_s1 = str_len(s1), len_s2 = str_len(s2);

	if (len_s1 == 0 || len_s2 == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	len = len_s1 + len_s2;
	a = convert_string_to_array(s1, len_s1);
	b = convert_string_to_array(s2, len_s2);
	ans = (int *)my_calloc(len, sizeof(int));

	if (ans == NULL)
		error();

	multiply_arrays(a, b, len_s1, len_s2, ans);
	carry_over(ans, len);

	while (len > 1 && *(ans + len - 1) == 0)
		len--;
	print_array(ans, len);

	free(a);
	free(b);
	free(ans);

	return (0);
}
