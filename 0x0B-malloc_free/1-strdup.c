#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy to a new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *sss;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	sss = malloc(sizeof(char) * (j + 1));

	if (sss == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		sss[r] = str[r];

	return (sss);
}
