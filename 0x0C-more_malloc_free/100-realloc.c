#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: the pointer to previously allocated memory
  * @old_size: size of allocated space for ptr
  * @new_size: size of newly allocated space
  * Return: Null if new_size == 0 , ptr is not null.
  *          Ptr if new_size == old_size
  *         Pointer to newly allocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a;
	unsigned int limit;
	char *ptr_copy;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	limit = new_size;
	if (new_size > old_size)
	limit = old_size;

	ptr_copy = ptr;
	for (a = 0; a < limit; a++)
		p[a] = ptr_copy[a];

	free(ptr);

	return (p);
}
