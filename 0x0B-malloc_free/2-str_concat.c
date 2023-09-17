#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1:the string to be joined to
  * @s2:the string to join s1
  * Return: pointer to newly allocated space in memory
  *         containing concatenated string , or NULL if err
  *         in concatenating
  */

char *str_concat(char *s1, char *s2)
{
	char *join;
	int c = 0;
	int len = 0;
	int a;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		len++;

	join = malloc(sizeof(char) * len);

	if (join == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		join[c++] = s1[a];

	for (a = 0; s2[a]; a++)
		join[c++] = s2[a];

	return (join);
}
