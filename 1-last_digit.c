#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry port
 * Desription : 'get last digit of a number'
 * return : always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d n %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d n %d and is zero", n, ld);
	}
	else
	{
		printf("last digit of %d n %d and is less than 6 and not 0", n, ld);
	}
	return (0);
}
