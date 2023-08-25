#include "main.h"

/**
* rot13 - encodes a string using rot13.
* @str: input
* Return: character
*/

char *rot13(char *str)
{
	int i, j;

	char Bf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Rot[] = "NOPQRSTUWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == Bf[j])
			{
				str[i] = Rot[j];
				break;
			}
		}
	}
	return (str);
}
