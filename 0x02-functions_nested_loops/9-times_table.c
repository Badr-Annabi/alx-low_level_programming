#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
*/
void times_table(void)
{
	int i, j, m, mo, d;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			m = i * j;
			if (m > 9)
			{
			mo = m % 10;
			d = (m - mo) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(d + '0');
			_putchar(mo + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
