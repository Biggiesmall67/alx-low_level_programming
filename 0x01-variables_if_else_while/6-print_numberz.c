#include <stdio.h>

/**
 * main - print single digit numbers of base 10 starting from 0,
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
