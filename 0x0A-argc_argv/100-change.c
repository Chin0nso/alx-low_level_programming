#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  *@argc: number of arguments
  *@argv: string
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int i, num_coins, count;

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;


	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
