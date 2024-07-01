#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows and columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	/* Calculate sum of the primary diagonal (top-left to bottom-right) */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	/* Calculate sum of the secondary diagonal (top-right to bottom-left) */
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}

	/* Print the sums */
	printf("%d, %d\n", sum1, sum2);
}
