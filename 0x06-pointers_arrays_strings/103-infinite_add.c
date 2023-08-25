#include "main.h"
/**
 * infinite_add -  adds two numbers.
 * @n1: first string.
 * @n2: second string
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c = 0, a1, b1, sum, big;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		big = a;
	else
		big = b;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';
	while (big >= 0)
	{
		a1 = (n1[a - 1] - '0');
		b1 = (n1[b - 1] - '0');
		if (a > 0 && b > 0)
			sum = a1 + b1 + c;
		else if (a < 0 && b > 0)
			sum = b1 + c;
		else if (a > 0 && b < 0)
			sum = a1 + c;
		else
			sum = c;
		if (sum > 9)
			c = sum / 10;
			sum = (sum % 10) + '0';
		else
			c = 0;
			sum = sum + '0';
		r[big] = sum;
		a1--;
		b1--;
		big--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
