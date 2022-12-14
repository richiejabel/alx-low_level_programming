#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * main - Print _putchar
 * main -Entry point
 * Return: Always 0
 */

int main(void);

{

	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);

}
char c;
int _putchar(char c)
{
	return (write(1, &c, 1));

}
