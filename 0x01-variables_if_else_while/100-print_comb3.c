#include <stdio.h>

/**
 * main - Combination of 2 numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 48, m = 49, n = 49;

	while (i < 58)
	{
		for (m = n; m < 58; m++)
		{
			putchar(i);
			putchar(m);
			if (i == 56 && m == 57)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
		i = i + 1;
		n = n + 1;
	}
	return (0);
}
