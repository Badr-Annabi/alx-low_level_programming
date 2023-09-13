#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints the name in the input.
 * @name: the name.
 * @f: function that we ll work with.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
