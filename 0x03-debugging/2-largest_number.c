
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    /* If 'a' is greater than or equal to 'b' and 'c' */
    if (a >= b && a >= c)
    {
        largest = a;
    }
    /* If 'b' is greater than or equal to 'a' and 'c' */
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    /* 'c' is the largest if none of the above conditions are true */
    else
    {
        largest = c;
    }

    return largest;
}
