#include "main.h"
/**
 * swap_int - swaps the values of two ints
 * @a: swap
 * @b: swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
