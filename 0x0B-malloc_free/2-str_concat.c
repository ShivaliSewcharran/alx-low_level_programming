#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int k, bs;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = bs = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[bs] != '\0')
		bs++;
	conct = malloc(sizeof(char) * (k + bs + 1));

	if (conct == NULL)
		return (NULL);
	k = bs = 0;
	while (s2[k] != '\0')
	{
		conct[k] = s1[k];
		k++;
	}

	while (s2[bs] != '\0')
	{
		conct[k] = s2[bs];
		k++, bs++;
	}
	conct[k] = '\0';
	return (conct);
}
