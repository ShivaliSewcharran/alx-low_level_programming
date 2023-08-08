#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars with a specific char
 * @size: size of the array
 * @c: char that is assigned
 * Description: create array of size size and assign it with char c
 * Return: pointer to array, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
