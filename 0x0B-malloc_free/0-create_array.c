#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size
 * @size: size of array
 * @c: char to store in array
 * Description: create array of size size and assign char c
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arr[i] = c;
	return (arr);
}
