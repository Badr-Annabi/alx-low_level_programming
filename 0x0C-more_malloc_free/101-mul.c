#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Eroor"

/**
 * is_digit - checks if the inputs are digits
 * @str: input.
 * Return: 0 if the content is not a digit, 1 if not
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _length - returns the length of the string.
 * @str: our input.
 * Return: the length.
 */
int _length(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * error - return error
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies 2 integers.
 * @argc: number of arguments.
 * @argv: array that contains the arguments.
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	char *a, *b;
	int len, len1, len2, i, res, dig1, dig2, *ptr, j = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !is_digit(a) || !is_digit(b))
		error();
	len1 = _length(a), len2 = _length(b), len = len1 + len2 + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		ptr[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = a[len1] - '0';
		res = 0;
		for (len2 = _length(b) - 1; len2 >= 0; len2--)
		{
			dig2 = b[len2] - '0';
			res += ptr[len1 + len2 + 1] + (dig1 * dig2);
			ptr[len1 + len2 + 1] = res % 10;
			res /= 10;
		}
		if (res > 0)
			ptr[len1 + len2 + 1] += res;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (ptr[i])
			j = 1;
		if (j)
			_putchar(ptr[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(ptr);
	return (0);

}
