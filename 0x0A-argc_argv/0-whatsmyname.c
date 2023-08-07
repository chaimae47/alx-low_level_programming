#include <stdio.h>

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments provided.
* @argv: An array of pointers to the command-line arguments.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
if (argc >= 1)
{
printf("%s\n", argv[0]);
}
return (0);
}
