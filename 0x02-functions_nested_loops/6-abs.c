#include "main.h"
/**
* _abs - computes the absolute value of an integer.
* @i: the integer that we want it's absolute value
* Return: i the integer
*/
int _abs(int i)
{
	if (i < 0)
	{
		int a;

		a = i * -1;
		return (a);
	}
	return (i);
}
