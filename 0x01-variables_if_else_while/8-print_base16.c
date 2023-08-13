#include <stdio.h>
/**
  * main - Entry point
  * Description - prints base 16 in lowercase
  * Return: Always (0)
  */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)

	putchar(i + '0');

	for (j = 'a' ; j <= 'f' ; j++)

	putchar(j);

	putchar('\n');

	return (0);
}
