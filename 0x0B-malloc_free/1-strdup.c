#include <stdio.h>
#include <stdlib.h>		
#include "main.h"
		
/**
 * _strdup - duplicate to new memory space location	
 * @str: char	
 * Return: 0		
 */
char *_strdup(char *str)		
{
	char *mal;
	int i = 0, r = 0;
			
	if (str == NULL)
		
		return (NULL);
	
	while (str[i] != '\0')
		i++;
		
	mal = malloc(sizeof(char) * (i + 1));
		
	if (mal == NULL)
		return (NULL);
		
	for (r = 0; str[r]; r++)
		mal[r] = str[r];
		
	return (mal);		
}
