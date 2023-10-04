#include <stdio.h>
#include <stdlib.h>

/**
* _isdigit - Checks if a character is a digit
* @c: The character to check
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(char c) {
return (c >= '0' && c <= '9');
}

/**
* _strlen - Computes the length of a string
* @s: The string
*
* Return: The length of the string
*/
int _strlen(char *s) {
int len = 0;
while (s[len])
len++;
return len;
}

/**
* _puts - Prints a string to the standard output
* @s: The string to print
*/
void _puts(char *s) {
while (*s)
putchar(*s++);
}

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line argument strings
*
* Return: 0 on success, 98 on errors
*/
int main(int argc, char *argv[]) {
if (argc != 3) {
_puts("Error");
return (98);
}

char *num1 = argv[1];
char *num2 = argv[2];

for (int i = 0; num1[i]; i++) {
if (!_isdigit(num1[i])) {
_puts("Error");
return (98);
}
}

for (int i = 0; num2[i]; i++) {
if (!_isdigit(num2[i])) {
_puts("Error");
return (98);
}
}

int len1 = _strlen(num1);
int len2 = _strlen(num2);
int len_result = len1 + len2;
int *result = calloc(len_result, sizeof(int));

if (!result) {
return (1);
}

for (int i = len1 - 1; i >= 0; i--) {
for (int j = len2 - 1; j >= 0; j--) {
int digit1 = num1[i] - '0';
int digit2 = num2[j] - '0';
int product = digit1 * digit2;
result[i + j + 1] += product;
if (result[i + j + 1] >= 10) {
result[i + j] += result[i + j + 1] / 10;
result[i + j + 1] %= 10;
}
}
}

int leading_zeroes = 1;
for (int i = 0; i < len_result; i++) {
if (result[i] != 0) {
leading_zeroes = 0;
}
if (!leading_zeroes) {
putchar(result[i] + '0');
}
}

if (leading_zeroes) {
putchar('0');
}

putchar('\n');
free(result);
return (0);
}
