#include <stdio.h>

/**
 * main - print the alphabet in lowercase,
 * followed by new line, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	purchar('\n');
	return (0);
}
