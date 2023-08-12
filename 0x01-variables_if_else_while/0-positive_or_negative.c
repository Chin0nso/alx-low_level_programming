#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main-printing random numbers
  *
  *Return: Always (0)
  */
int main(void)
{
srand(time(NULL));

int n = rand();

if (n > 0)
	printf("The number %d is positive\n", n);
else if (n == 0)
{
	printf("The number %d is zero\n", n);
}
else if (n < 0)
{
	printf("The number %d is negative\n", n);
}

	return (0);
}
