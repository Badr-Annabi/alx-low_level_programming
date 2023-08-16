#include "main.h"

/**
* main - Test if n positive, negative or zero
*@i: the input
* Return: Nothing
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
        }
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
