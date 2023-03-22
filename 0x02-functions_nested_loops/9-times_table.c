#include "main.h"

/**
 *times_table - funtion to print the table
 *
 *Return: always 0
 *
 *
 *
 */
void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		_putchar('o');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			prod = i * j;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');

		}

}

