#include <stdio.h>
/**
  *main - a program that prints its name,
  *        followed by a new line
  *@argc: number of arguments
  *@argv: array of strings containing those arguments
  *Return: (0)
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
