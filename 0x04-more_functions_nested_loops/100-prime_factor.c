#include <stdio.h>
#include <math.h>

/**
* main - prints the largest prime factor of the number 61285247514
*
* Return: Always 0
*/

int main(void)
{
	long int n;
	long int i;
	long int lg;

	n = 612852475143;
	lg = -1;

	while (n % 2 == 0)
	{
		lg = 2;
		n /= 2;
	}
	for (i = 3 ; i <= sqrt(n) ; i++)
	{
		while (n % i == 0)
		{
			lg = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		lg = n;
	}
	printf("%ld", lg);

	return (0);

}
