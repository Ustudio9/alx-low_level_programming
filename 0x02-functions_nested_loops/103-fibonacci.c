#include <stdio.h>
#include "main.h"
/**
 * main - print sum of even valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
