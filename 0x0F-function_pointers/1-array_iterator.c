#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  *		     on each element of an array.
  *@array: the array to be executed
  *@size: the size of the aray
  *@action: pointer
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
