#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
* print_all - Print values of various types followed by a new line.
* @format: The format string indicating the types of arguments.
* @...: The variable arguments.
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *separator = "";
char current_char;

const char *valid_formats = "cifs";
va_start(args, format);

while (format && format[i])
{
current_char = format[i];
if (strchr(valid_formats, current_char))
{
printf("%s", separator);
if (current_char == 'c')
printf("%c", va_arg(args, int));
else if (current_char == 'i')
printf("%d", va_arg(args, int));
else if (current_char == 'f')
printf("%f", va_arg(args, double));
else if (current_char == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}
separator = ", ";
}
i++;
}

va_end(args);
printf("\n");
}
