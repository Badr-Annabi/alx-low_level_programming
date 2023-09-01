#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts the string to an integer
 * @s: string
 * Return: converts the integer from string
 */
int _atoi(char *s)
{
	unsigned int ch = 0;
	int a = 1;

	do {
		if (*s == '-')
			a *= -1;
		else if (*s >= '0' && *s <= '9')
			ch = (ch * 10) + (*s - '0');
		else if (ch > 0)
			break;
	} while (*s++);

	return (ch * a);
}

/**
 * main - multiplies two numbers.
 * @argc: first argument.
 * @argv: second argument.
 * Return: 0 if we have success, 1 if not.
 */

int main(int argc, char *argv[])
{
	int n, m, res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n = _atoi(argv[1]);
	m = _atoi(argv[2]);
	res = n * m;
	printf("%d\n", res);
	return (0);
}
