#include <stddef.h>
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which
 *  cmp function does not return 0,
 *         -1 if no element matches
 *  or if array is NULL, cmp is NULL, or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
/* Declare the loop variable outside the loop */
    int i;

    /* Check for NULL array, NULL cmp, or size <= 0 */
    if (array == NULL || cmp == NULL || size <= 0)
        return -1;

    /* Iterate through the array */
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return i;
    }

    return -1;
}
