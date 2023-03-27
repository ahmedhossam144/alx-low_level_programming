#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0, i;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
