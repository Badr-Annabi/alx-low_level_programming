#include "main.h"

/**
* _isupper -  checks for uppercase character.
* @c: The character that we want to check
* Return: 1 If the input is uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c < 90)
	return (1);
	else
	return (0);
}
