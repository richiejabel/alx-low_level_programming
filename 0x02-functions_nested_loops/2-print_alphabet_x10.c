#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes characters
 * print_alphabet_x10 - prints  ten times of alphabet
 * Return: Always 0
 */

void print_alphabet_x10(void)

{
	char small_letters;
	int num;

	for (num = 0; num <= 9; num++)
	{
	for (small_letters = 'a'; small_letters <= 'z'; small_letters++)
		_putchar(small_letters);
	_putchar('\n');
	{
	if (num < 10)
		continue;
	}
	}
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
