#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random values
 * Return: 0
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	else if (lastd == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	return (0);
}
