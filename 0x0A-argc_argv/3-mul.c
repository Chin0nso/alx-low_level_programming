#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  *@argc: number of arguments
  *@argv: array of string
  * Return: (1) for error (0) success
  */
int main(int argc, char *argv[])
{
	int n1, n2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	n1 = atoi(argv[1]);

	n2 = atoi(argv[2]);

	result = n1 * n2;

		printf("%d\n", result);
	return (0);
}
