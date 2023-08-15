#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: the character that we check
* Return: 1 if c lowercase or uppercase, 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
