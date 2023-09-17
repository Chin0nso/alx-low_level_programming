#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _strdup - Returns a pointer to a newly-allocated space in memory
  *           containing a copy of the string given as parameter.
  * @str: string to copy
  * Return: null if insufficient memory or str == null
  *         a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
		;
	a++;

	copy = malloc(a * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < a; b++)
	{
		copy[b] = str[b];
	}

	return (copy);
}
