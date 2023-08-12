#include <stdio.h>
/**
  * main - Entry point
  * Description - Prints lowercase alphabet
  * Return: Always (0)
  */
int main(void)
{
int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar(letter);
}


	putchar('\n');
	return (0);
}
