#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * The first part is to assign a random number to n every time
 * My code is giving a message about the last digit of the n value
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is", n);
	rem = n % 10;
	if (rem > 5)
		printf(" %d and is greater than 5\n", rem);
	else if (rem == 0)
		printf(" %d and is 0\n", rem);
	else
		printf(" %d and is less than 6 and not 0\n", rem);
	return (0);
}
