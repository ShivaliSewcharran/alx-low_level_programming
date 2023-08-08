#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **tii;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	tii = malloc(sizeof(int *) * height);

	if (tii == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		tii[a] = malloc(sizeof(int) * width);

		if (tii[a] == NULL)
		{
			for (; a >= 0; a--)
				free(tii[a]);

			free(tii);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			mee[a][b] = 0;
	}

	return (tii);
}
