#include <stdio.h>
/**
  *swap_int - swaps te values of two integers
  *@a: first interger to swapped
  *@b: second interger to be swapped
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;

}
