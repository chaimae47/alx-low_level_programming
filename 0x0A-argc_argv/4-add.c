#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments provided.
* @argv: An array of pointers to the command-line arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
bool valid = true;

/*Check if there are any arguments (numbers)*/
if (argc == 1)
{
printf("0\n");
return (0);
}

/* Loop through each argument (excluding the program name)*/
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);

/* Check if the argument is a positive number*/
if (num <= 0 || (num == 0 && argv[i][0] != '0'))
{
valid = false;
break;
}

/* Add the number to the sum*/
sum += num;
}

/* Print the result or "Error" if an invalid argument is encountered*/
if (valid)
printf("%d\n", sum);
else
printf("Error\n");

return (valid ? 0 : 1);
}
