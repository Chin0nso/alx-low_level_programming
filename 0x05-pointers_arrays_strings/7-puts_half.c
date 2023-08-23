#include "main.h"
/**
  *puts_half - a functiom that prints half of a string
  *@str: the input
  *Return: half of input
  */
void puts_half(char *str)
{
	int s, n, len;

	len = 0;

	for (s = 0; str[s] != '\0'; s++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for  (s = n; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');


}
