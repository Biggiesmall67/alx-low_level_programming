#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - print last digit of a random
 * number stored in a variable n
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("last digit of %d is %d ", n, x);
	if (x > 5)
	{
		prinf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
	printf("\n");
}
