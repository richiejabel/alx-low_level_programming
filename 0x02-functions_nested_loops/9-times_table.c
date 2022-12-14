#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * num1: variable numbers
 * num2: holds 9
 * Return: Always 1
 */

void times_table(void)

{
	int num1;
	int num2;
	int mult;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)

		{
			_putchar(',');
			_putchar(' ');

			mult = num1 * num2;

			if (mult <= 9)

				_putchar(' ');

			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');

		}

		_putchar('\n');

	}

}
