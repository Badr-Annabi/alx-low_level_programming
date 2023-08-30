#include "main.h"
/**
 * _prime_num - checks if n is prime number or not.
 * @n: input that we want to check.
 * @i: numbers befor n that we ll check with.
 * Return: 1 if it s prime number , 0 if not.
 */
int _prime_num(int n, int i);


/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: input that we want to check.
 * Return: 1 if it s prime number , 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_num(n, n - 1));
}

/**
 * _prime_num - checks if n is prime number or not.
 * @n: input that we want to check.
 * @i: numbers befor n that we ll check with.
 * Return: 1 if it s prime number , 0 if not.
 */


int _prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_num(n, i - 1));
}
