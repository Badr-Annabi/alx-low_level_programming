#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - this function is used to select
 * the operation asked by the user.
 * @op: operator.
 * Return: res
 */

int (*get_op_func(char *op))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *op)
	{
		i++;
	}
	return (NULL);
}
