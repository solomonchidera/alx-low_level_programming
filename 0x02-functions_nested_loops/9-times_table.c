#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + 48);
			}

			if (k < 10 && j != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(k + 48);
			} else if (k >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
