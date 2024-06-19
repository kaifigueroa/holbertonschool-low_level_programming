#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;

			if (mult == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (prod < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((prod / 10) + '0');
				}

				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
