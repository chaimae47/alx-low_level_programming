/**
* find_sqrt - Helper function to recursively find the square root.
*
* @n: The number for which to find the square root.
* @guess: The current guess for the square root.
*
* Return: The square root of n, or -1 if n doesn't have
* a natural square root.
*/
int find_sqrt(int n, int guess);

/**
* _sqrt_recursion - Returns the natural square root of a number.
*
* @n: The number for which to find the square root.
*
* Return: The square root of n, or -1 if n doesn't have a
* natural square root.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (find_sqrt(n, n / 2));
}

/**
* find_sqrt - Helper function to recursively find the square root.
*
* @n: The number for which to find the square root.
* @guess: The current guess for the square root.
*
* Return: The square root of n, or -1 if n doesn't have a
* natural square root.
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
else if (guess * guess < n)
return (find_sqrt(n, guess + 1));
else
return (find_sqrt(n, guess - 1));
}
