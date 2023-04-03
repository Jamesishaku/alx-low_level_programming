#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int diagonal_s1 = 0;
	int diagonal_s2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_s1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_s2 += a[i];
	}

	printf("%d, %d\n", diagonal_s1, diagonal_s2);

}
