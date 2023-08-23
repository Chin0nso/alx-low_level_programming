#include "main.h"
/**
  *puts2 - prints every other character of a string
  *@str: the string
  *
  */
void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	t = l - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
