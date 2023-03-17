#include <stdio.h>

/**
 * main - Prints all alphabts even the capital ones.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char characters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(characters[i]);
	}
	putchar('\n');
	return (0);
}

