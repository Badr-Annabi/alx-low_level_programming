#include "main.h"
/**
* _islower - checks for lowercase character.
* @c: Its the character which be checked
* Return: 1 for lowercase, 0 for other
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
