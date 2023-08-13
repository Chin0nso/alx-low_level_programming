#include <stdio.h>
/**
  * main - Entry point
  * description - print all small letters of the alphabet except q,e
  * Return: Always (0)
  */
int main(void)
{
char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter != 'q' && letter != 'e')
{
	putchar(letter);
}
}
	putchar('\n');
	return (0);
}
