#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: Nothing
*/

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 58)
	{
		if (i == 0)
		{
			printf("%d", j)
		}
		else if (i == 1)
		printf("%d", k);
		else
		{
			k + = j;
			j = k - j;
			printf(", %d", k);
		}
		++i
	}
	printf("\n");
	return (0);
}

