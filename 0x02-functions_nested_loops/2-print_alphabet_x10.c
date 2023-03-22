#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase, 10 times.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 10;

	while (i--)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}

