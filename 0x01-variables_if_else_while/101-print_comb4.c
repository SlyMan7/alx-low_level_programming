#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (j = i + 1 ; j <= 2 ; j++)
		{
			for (k = j + 1 ; k <= 2 ; k++)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				putchar(k + '0');
			if (i != 0 || j != 1 || k != 2)
				putchar('\n');
			}
		}
	}
	return (0);
}
