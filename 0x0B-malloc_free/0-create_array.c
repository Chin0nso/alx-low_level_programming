#include "main.h"
#include <stdlib.h>
/**
  * *create_array - creates an array of chars
  *@size: array size
  *@c: character
  * Return: NULL if size is 0; pointer or null if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int s;

	if (size == 0)
	return (NULL);

	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < size; s++)
	{
		p[s] = c;
	}
	return (p);

}


