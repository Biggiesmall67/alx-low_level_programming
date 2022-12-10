#include <stdio.h>

/**
 * main - print possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, a;

	for (i = 0; i < 100; i++)
	{
		for (a = 0; a < 100; j++)
		{
			if (i < a)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				if (i != 98 || a != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
