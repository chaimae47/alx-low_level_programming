#include <stdio.h>
#include <stdlib.h>

/*
* This program prints the opcodes of its own main function.
*
* Usage: ./main number_of_bytes
* Output format:
* The opcodes are printed in hexadecimal, lowercase
* Each opcode is two characters long
* Listing ends with a new line
*
* You are allowed to use printf and atoi
* You have to use atoi to convert the argument to an int
*
* If the number of arguments is not correct,
print Error, followed by a new line, and exit with the status 1
* If the number of bytes is negative,
print Error, followed by a new line, and exit with the status 2
*
* You do not have to compile with any flags
*
* Note: if you want to translate your opcodes
to assembly instructions, you can use, for instance, udcli.
*/
int main(int argc, char *argv[])
{
int num_bytes;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

printf("%02x", *((unsigned char *)main));

for (i = 1; i < num_bytes; i++)
{
printf(" %02x", *((unsigned char *)main + i));
}

printf("\n");
return (0);
}
