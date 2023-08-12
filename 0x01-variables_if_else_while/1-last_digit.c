#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - prints last digits of random numbers */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int lastdigit = rand() % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (lastdigit > 5)
	printf("Last digit of %d is greater than 5\n", n);
else if (lastdigit == 0)
{
	printf("Last digit of %d is 0\n", n);
}
else if (lastdigit < 6)
{
	printf("Last digit of %d is less than 6\n", n);
}
	return (0);
}
