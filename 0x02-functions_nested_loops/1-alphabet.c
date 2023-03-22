#include "main.h"

/**
 * main - Alphabet function
 * is wriiten by ahmed hossam
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i = 97;
	for(i = 97; i<123; i++)
		_putchar(i);

	_putchar('\n');
}
