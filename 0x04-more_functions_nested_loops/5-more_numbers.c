#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)

{
	int c;
	int n;

	for (n = 1; n <= 10; n++)
	{

	for (c = 0; c <= 14; c++)
	{
		if (c >= 10)

			_putchar(1);
		_putchar(j % 10 + '0');
	}

	_putchar('\n');
	}

}
