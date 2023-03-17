#include <stdio.h>

/**
 * main - Combination of 2 numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0, m = 48;
	while(i < 10)
	{
		for(m = 48; m < 58; m++)
		{
			putchar(m);
			putchar(m+1);
			putchar(44);
			putchar(32);
		}
		i++;
		m++;
	}
	return (0);
}
