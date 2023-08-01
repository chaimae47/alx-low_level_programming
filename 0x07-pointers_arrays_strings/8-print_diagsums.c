#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to the square matrix (2D array)
* @size: size of the square matrix
*/
void print_diagsums(int *a, int size)
{
int i, diag1_sum = 0, diag2_sum = 0;

for (i = 0; i < size; i++)
{
/* Sum of the elements on the main diagonal (top-left to bottom-right) */
diag1_sum += a[i * size + i];

/* Sum of the elements on the secondary diagonal (top-right to bottom-left) */
diag2_sum += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", diag1_sum, diag2_sum);
}
