#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: first argument count
 * @argv: second arguments array
 * Return: Result of addition.
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc < 1)
		printf("%d\n", argc);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0 ; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);

}
