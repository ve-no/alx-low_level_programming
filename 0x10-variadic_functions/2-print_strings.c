#include "variadic_functions.h"

/**
 * print_strings - Prints char, followed by line.
 * @separator: char to be print.
 * @n: nbr of char passed to the function.
 * @...: variable nbr of char to printed.
 * Description: separator == NULL,so not printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

