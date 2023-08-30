#include "main.h"
/**
 * _helper_sqrt - returns the actual sqrt if n > 1.
 * @n: input.
 * @i: the checker (i*i)=n.
 * Return: real sqrt of n.
 */

 int _helper_sqrt(int n, int i);




/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input.
 * Return: squrt of that n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (_helper_sqrt(n, 0));
}
/**
 * _helper_sqrt - returns the actual sqrt if n > 1.
 * @n: input.
 * @i: the checker (i*i)=n.
 * Return: real sqrt of n.
 */
int _helper_sqrt(int n, int i)
{

	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_helper_sqrt(n, i + 1));
}
