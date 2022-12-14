#include "main.h"
#include <unistd.h>
/**
 * main - Print _putchar
 * _putchar - writes the character
 * Return: Always 0
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('q');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
