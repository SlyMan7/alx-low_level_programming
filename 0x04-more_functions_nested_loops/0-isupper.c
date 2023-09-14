#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: parameter to check
 *
 * Return: on success 1 on failure 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

