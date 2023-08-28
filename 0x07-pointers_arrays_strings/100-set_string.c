#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the variable that we want to change.
 * @to: the new value.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
