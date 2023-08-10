#include <stdio.h>
/**
 * main - Prints the size of data types
 *
 * Return: Always 0
 */
int main(void)
{	char c;
	int i;
	long int l;
	long long int p;
	float f;

	printf("Size of a char: %lu", sizeof(c));
	printf("Size of an int: %lu", sizeof(i));
	printf("Size of a long int: %lu", sizeof(l));
	printf("Size of a long long int: %lu", sizeof(p));
	printf("Size of a float: %lu", sizeof(f));
	return (0);
}
