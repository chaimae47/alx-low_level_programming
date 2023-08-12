#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two positive numbers
* @argc: Argument count
* @argv: Argument values
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (98);
}
}
}

char *num1 = argv[1];
char *num2 = argv[2];
int len1 = 0;
int len2 = 0;

while (num1[len1] != '\0')
len1++;

while (num2[len2] != '\0')
len2++;

int *result = malloc(sizeof(int) * (len1 + len2));
if (result == NULL)
return (1);

for (int i = 0; i < len1 + len2; i++)
result[i] = 0;

for (int i = len1 - 1; i >= 0; i--)
{
for (int j = len2 - 1; j >= 0; j--)
{
int product = (num1[i] - '0') * (num2[j] - '0');
int sum = product + result[i + j + 1];
result[i + j] += sum / 10;
result[i + j + 1] = sum % 10;
}
}

int skip_leading_zeros = 1;

for (int i = 0; i < len1 + len2; i++)
{
if (result[i] != 0)
skip_leading_zeros = 0;

if (!skip_leading_zeros)
putchar(result[i] + '0');
}

if (skip_leading_zeros)
putchar('0');

putchar('\n');
free(result);

return (0);
}
