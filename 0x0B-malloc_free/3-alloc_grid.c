#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Returns a pointer to a 2-dimensional array of
  *              integers with each element initalized to 0.
  * @width: width
  * @height: height
  * Return: NULL If width <= 0, height <= 0, or error,
  *         else a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **aa;

	if (width <= 0 || height <= 0)
		return (NULL);

	aa = malloc(sizeof(int *) * height);

	if (aa == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		aa[h] = malloc(sizeof(int) * width);

		if (aa[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(aa[w]);
			free(aa);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			aa[h][w] = 0;
		}
	}
	return (aa);
}
