#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - calculator.
 * @argc: we won't work with it.
 * @argv: Our element.
 * Return: result of the operation.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
