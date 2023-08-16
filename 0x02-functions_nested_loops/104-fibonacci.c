#include <stdio.h>

/**
* main -  prints the first 98 Fibonacci numbers, starting with 1 and 2.
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fbh11, fbh12, fbh21, fbh22;
	unsigned long h1, h2;

	for (i = 0; i < 92; i++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);
		fb1 = fb2;
		fb2 = sum;
	}
	fbh11 = fb1 / 10000000000;
	fbh21 = fb2 / 10000000000;
	fbh12 = fb1 % 10000000000;
	fbh22 = fb2 % 10000000000;
	for (i = 93; i <= 98; i++)
	{
		h1 = fbh11 + fbh21;
		h2 = fbh12 + fbh22;
		if (fbh12 + fbh22 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
		printf(", ");
		fbh11 = fbh21;
		fbh12 = fbh22;
		fbh21 = h1;
		fbh22 = h2;
	}
	printf("\n");
	return (0);
}
