#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0
 */

int main(void)

{
	int fig_1;
	int fig_2;
	int fig_3;

	for (fig_1 = 0; fig_1 < 8; fig_1++)
	{
		for (fig_2 = fig_1 + 1; fig_2 < 9; fig_2++)
		{
			for (fig_3 = fig_2 + 1; fig_3 < 10; fig_3++)
			{
				putchar(fig_1 + '0');
				putchar(fig_2 + '0');
				putchar(fig_3 + '0');

			if (fig_1 == 7 && fig_2 == 8 && fig_3 == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
