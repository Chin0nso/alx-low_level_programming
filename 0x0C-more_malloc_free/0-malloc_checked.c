#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc
  *@b: number of memory to allocate
  * Return: pointer to memory or exit normal with 98
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);

}
