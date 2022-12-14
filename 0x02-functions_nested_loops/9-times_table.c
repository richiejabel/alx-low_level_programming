#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * num1: variable numbers
 * num2: holds 9
 */

void times_table(void)

{
	int num1;
	int num2 = 9;

	for (num1 = 0; num1 > 0; num1++)

		_putchar(((num1 % 10) * (num2 % 10)) + '0');

	return (1);

}
