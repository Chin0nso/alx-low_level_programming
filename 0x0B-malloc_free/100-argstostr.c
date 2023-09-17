#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of the program
  *             arguments sepreated by newline.
  * @ac: number of arguments
  * @av: double pointer(array pointer) to arguments
  *
  * Return: NULL if ac || av = 0 or error
  *         else pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int a, b;
	int i = 0;
	int n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			n++;
		n++;
	}

	n++;
	s = malloc(n * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[i] = av[a][b];
			i++;
		}
		s[i] = '\n';
		i++;
	}

	s[i] = '\0';
	return (s);
}
