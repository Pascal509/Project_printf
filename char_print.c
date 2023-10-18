#include "main.h"

/**
 * char_print - Prints a character when the format specifier given is 'c'
 * @args: Accesses the variable arguments passed to the string
 * @buffer: Not handled
 * @flags: Not handled
 * @width: Not handled
 * @precision: Not handled
 * @size: Not handled
 * Return: Number of character printed
 */

int char_print(va_list args, char __attribute__((unused))*buffer,
		int flags, int width, int precision, int size)
{
	int printed_char;

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	printed_char = _putchar(va_arg(args, int));

	return (printed_char);
}
