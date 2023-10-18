#include "main.h"

/**
 * percent_print - Prints the percent symbol when
 * the format specifier is '%'
 * @args: Accesses all of the variable arguments
 * @buff: Not handled.
 * @flags: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @size: Not handled.
 * Return: The number of characters printed.
 */
int percent_print(va_list args, char __attribute__((unused))buff[],
		int flags, int width, int precision, int size)
{
	int printedChars = 1;

	UNUSED(args);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	return (printedChars);
}
