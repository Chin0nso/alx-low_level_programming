#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - performs imple operations and print result
  * @argc:the number of arguments passed
  * @argv: the array of pointers to arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int n1, n2, i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = func(n1, n2);
	printf("%d\n", i);
	return (0);
}
