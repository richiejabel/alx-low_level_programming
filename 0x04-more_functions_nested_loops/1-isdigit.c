#include "main.h"

/**
 * _isdigit - checks for digit
 * Return: 1 if digit and 0 otherwise
 * @c: character being checked
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')

		return (1);

	else
		return (0);

}
