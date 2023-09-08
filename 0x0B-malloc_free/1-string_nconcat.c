#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatenates two strings.
  *@s1: string 1
  *@s2: string 2
  *@n: number ot bytes to copy
  * Return: Null if error, or char pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int a;
	char *p;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		p[a] = s1[a];

	for (a = 0; a < j; a++)
		p[a + i] = s2[a];

	p[i + j] = '\0';

	return (p);
}
