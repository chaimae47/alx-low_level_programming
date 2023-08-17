#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int))
{
    int i; /* Declare the loop variable outside the loop */

    /* Check for NULL array, NULL cmp, or size <= 0 */
    if (array == NULL || cmp == NULL || size <= 0)
        return -1; /* Return -1 if any of these conditions are met */

    /* Iterate through the array */
    for (i = 0; i < size; i++)
    {
        /* If cmp function does not return 0 for the current element */
        if (cmp(array[i]) != 0)
            return i; /* Return the index of the current element */
    }

    return -1; /* Return -1 if no element matches */
}
