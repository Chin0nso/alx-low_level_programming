#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-printing last digit of n
 *
 *Return:Always (0)
 */
int main(void)
{
	int n;
	int lastdigit;

	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;

	srand(time(0));

	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, lastdigit);
	}
		return (0);
}
