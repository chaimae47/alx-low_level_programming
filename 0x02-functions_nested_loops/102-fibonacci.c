#include <stdio.h>

/**
* print_fibonacci_sequence - Prints the Fibonacci sequence up to the given number.
* @n: The number of Fibonacci numbers to print.
*/
void print_fibonacci_sequence(int n) {
int i;
unsigned long long fib[n];

fib[0] = 1;  // First Fibonacci number
fib[1] = 2;  // Second Fibonacci number

printf("%llu, %llu", fib[0], fib[1]);

for (i = 2; i < n; i++) {
fib[i] = fib[i-1] + fib[i-2];
printf(", %llu", fib[i]);
}

printf("\n");
}

/**
* main - Entry point of the program.
* Return: 0 on success.
*/
int main() {
print_fibonacci_sequence(50);
return (0);
}
