#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main-printing random numbers
  *betty style doc for function main goes there
  *Return: Always (0)
  */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

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
