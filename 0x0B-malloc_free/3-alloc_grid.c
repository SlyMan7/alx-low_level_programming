#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int n;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			free(output);
			for (n = 0; n <= height; n++)
				free(output[n]);
			return (NULL);
		}
		for (n = 0 ; n < width ; n++)
			output[i][n] = 0;
	}
	return (output);
}
