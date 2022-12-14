#include "main.h"

/**
 * main - lists the natural numbers below 1024
 * excluding that which are multiples of 3 or 5
 * Return: Always 0
 */

int main(void)

{
	int i, sum = 0;

	for (int = 0; i < 1024; i++)

	{
		if ((i % 3) == 0 || (i % 5) == 0)

			sum += i;

	}

	printf("%d\n", sum);

	return (0);

}
