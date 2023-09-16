#include "function_pointers.h"

/**
  * int_index - searches for an integer in array of integers
  * @array: the array to search
  * @size: the size of array
  * @cmp: the pointer to function used to compare values
  * Return: the first index for which cmp doesn't return 0
  *         or (-1) if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);

}
