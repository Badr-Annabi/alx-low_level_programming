#include "main.h"

/**
* leet - encodes a string into 1337.
* @str: input
* Return: character
*/

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 52;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 51;
		}
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 48;
		}
		if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 55;
		}
		if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 49;
		}
		i++;
	}
	return (str);
}
