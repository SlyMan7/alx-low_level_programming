#include "main.h"

/**
 *puts_half -function prints half of string
 *if odd len, n = (length_of_the_string - 1) / 2
 * @str: The string to be printed
 *Return: void
 */
void puts_half(char *str)
{
	int i, n, count = 0;

	for (i = 0; str[i] != '\0' ; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
