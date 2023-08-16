#include "main.h"
/**
 *main - Entry point
 *print_alphabet - print all alphabet in lowercase
 *Return: Always (0)
 */
int main(void)
{
	void print_alphabet(void);


	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');

	return (0);

}
