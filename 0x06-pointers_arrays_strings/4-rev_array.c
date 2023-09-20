#include "main.h"

/**
 *reverse_array - reverse content of array
 *@a: array
 *@n: lent of elements of array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
