#include "main.h"

/**
* infinite_add - Adds two positive numbers represented as strings
* @n1: The first number string
* @n2: The second number string
* @r: The buffer to store the result
* @size_r: The size of the buffer
*
* Return: A pointer to the result if it can be stored in r, 0 otherwise.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, i, j, k, carry, sum;

/* Calculate the lengths of the two input strings */
for (len1 = 0; n1[len1]; len1++)
;
for (len2 = 0; n2[len2]; len2++)
;

/* Initialize the carry and index variables */
carry = 0;
i = len1 - 1;
j = len2 - 1;
k = 0;

/* Start adding digits from the rightmost digits */
while (i >= 0 || j >= 0 || carry)
{
sum = carry;

/* Add digits from n1 */
if (i >= 0)
sum += n1[i--] - '0';

/* Add digits from n2 */
if (j >= 0)
sum += n2[j--] - '0';

/* Update carry and store the result digit in r */
carry = sum / 10;
if (k < size_r - 1)
r[k++] = (sum % 10) + '0';
else
return (0);
}

/* Terminate the result string */
r[k] = '\0';

/* Reverse the result string */
for (i = 0, j = k - 1; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}

return (r);
}
