#include "main.h"
/**
  *print_sign - prints the sign of a number
  *@n: number to be printed
  *Return: 1 if n is greater than zero, 0 if otherwise, -1 if otherwise
  */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}




}
