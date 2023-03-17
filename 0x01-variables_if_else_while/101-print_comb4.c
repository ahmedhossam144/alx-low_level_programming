#include <stdio.h>

/**
 * main - Combination of 3 numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
        int i = 48, m = 49, n = 49, t = 50, y = 50;

        while (i < 58)
        {
                for (m = n; m < 58; m++)
                {
			for (t = y; t < 58; t++)
			{
				putchar(i);
				putchar(m);
				putchar(t);
				if (i == 55 && m == 56 && t == 57)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
                }
                i = i + 1;
                n = n + 1;
		y = y + 1;
        }
        putchar(10);
        return (0);
}
