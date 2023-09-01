#include "main.h"
#include <stdio.h>
/**
  * *_strchr - locates a character in a string
  *@s: the string to locate the character
  *@c: the character to be found
  * Return:  a pointer to the first occurrence
  *	     NULL if not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
