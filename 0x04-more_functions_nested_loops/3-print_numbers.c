#include "main.h"
/**
 * print_numbers - prints 0 - 9.
 *
 * Return: void.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
