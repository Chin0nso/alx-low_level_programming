#include <stdlib.h>
#include "main.h"

/**
  * array_range - Creates an array of integers ordered
  *               from min to max.
  * @min: The first array value
  * @max: The last value
  * Return: Null If min > max or error, else
  *         a pointer to the new array
 */

int *array_range(int min, int max)
{
	int a;
	int length;
	int *p;

	if (min > max)
	return (NULL);

	length = max - min + 1;

	p = malloc(sizeof(int) * length);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < length; a++, min++)
	{
		p[a] = min;
	}

	return (p);
}
