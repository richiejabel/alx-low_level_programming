#include "main.h"

/**
 * _abs - absolute value of integer
 * int: integer
 * @num: number being checked
 * Return: Always 0
 */

int _abs(int num)
{
	if (num >= 0)

		_putchar(num);

	else
		_putchar(-num);
	return (0);
}
