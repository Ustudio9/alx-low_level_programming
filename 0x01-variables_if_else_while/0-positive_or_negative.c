#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d The number is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d The number is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d The number is negative\n", n);
	}
	else
	{
		printf("%d\n", n);
	}
	return (0);
}
