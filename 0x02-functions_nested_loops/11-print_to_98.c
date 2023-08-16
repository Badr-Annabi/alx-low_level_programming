#include "main.h"
/**
* print_to_98 - prints all numbers from n to 98
* @n: the number which we ll return back to 98.
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n + '0');
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n + '0');
				_putchar(44);
				_putchar(32);
			}
		}
	}
}
