#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments provided.
* @argv: An array of pointers to the command-line arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int cents, coins = 0;

/* Check if the number of arguments is exactly 2 */
if (argc != 2)
{
printf("Error\n");
return (1);
}

/* Convert the argument to an integer using atoi*/
cents = atoi(argv[1]);

/*Check if the argument is negative*/
if (cents < 0)
{
printf("0\n");
return (0);
}

/* Calculate the minimum number of coins*/
while (cents >= 25)
{
cents -= 25;
coins++;
}
while (cents >= 10)
{
cents -= 10;
coins++;
}
while (cents >= 5)
{
cents -= 5;
coins++;
}
while (cents >= 2)
{
cents -= 2;
coins++;
}
while (cents >= 1)
{
cents -= 1;
coins++;
}

/* Print the minimum number of coins required*/
printf("%d\n", coins);

return (0);
}
