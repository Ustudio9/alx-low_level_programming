#include <stdio.h>

/**
 * main - prints the alphabeth  in lowercase
 * follow by new line
 * Return: Always 0 (Success)
 * */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
