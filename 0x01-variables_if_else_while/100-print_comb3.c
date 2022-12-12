#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0
 */

int main(void)

{
	int fig_1;
	int fig_2;

	for (fig_1 = 0; fig_1 < 9; fig_1++)
	{
		for (fig_2 = fig_1 + 1; fig_2 < 10; fig_2++)
		{
			putchar(fig_1 + '0');
			putchar(fig_2 + '0');

			if (fig_1 == 8 && fig_2 == 9)

				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
