#include <stdio.h>
/**
 * main - every point
 * return: always 0 (success)
 */
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long  int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);
}
