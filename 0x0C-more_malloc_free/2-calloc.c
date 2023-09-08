#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array using malloc
  * @nmemb: the number of elements
  * @size: size of array elements
  * Return: Null if nmemb = 0, size = 0, or error
  *         else pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;

	return (p);
}
