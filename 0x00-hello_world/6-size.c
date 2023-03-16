#include<stdio.h>
/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	puts("Size of a char: %d byte",sizeof(char));
	puts("Size of a int: %d byte",sizeof(int));
	puts("Size of a long int: %d byte",sizeof(long));
	puts("Size of a long long int: %d byte",sizeof(long long));
	puts("Size of a float: %d byte",sizeof(float));
	return (0);
}
