#include "main.h"

/**
 * print_last_digit - last digit of number
 * @dig: full number
 * Return: Returns the last digit
 */

int print_last_digit(int dig)

{
	int last_dig = dig % 10;

	if (last_dig < 0)

		last_dig *= -1;

	_putchar(last_dig + '0');

	return (last_dig);
}
