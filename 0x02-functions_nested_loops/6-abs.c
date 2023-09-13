#include "main.h"

/**
 * _abs - function find absolute value of numbers
 * @m: function parameter
 * Return: -m or m
 */
int _abs(int m)
{
	if (m < 0)
		return (-m);
	else if	(m >= 0)
	{
		return (m);
	}
	return (0);
}
