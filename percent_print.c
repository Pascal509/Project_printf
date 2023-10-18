#include "main.h"

/**
 * printPercent - Prints the percent symbol when the format specifier is '%'
 * @ap: Accesses all of the variable arguments
 * @buff: Not handled.
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif: Not handled.
 * Return: The number of characters printed.
 */
int percent_print(va_list args, char __attribute__((unused))buff[],
		int flags, int width, int precision, int size)

{
int printedChars = 1;

	UNUSED (args);
	UNUSED (flags);
	UNUSED (width);
	UNUSED (precision);
	UNUSED (size);

	return (printedChars);
}
