#include "main.h"
/**
 * string_print - Prints a string when the format specifier is 's'
 * @args: List type "all" of the variable arguments
 * @buffer: Variable that holds the converted format specifier
 * @flags: Not handled
 * @width: Not handled
 * @precision: Not handled
 * @size: Not handled
 * Return: Number of characters printed
 */

int string_print(va_list args, char *buffer, int flags, int width,
		int precision, int size)
{
	int printed_char = 0;
	UNUSED (flags);
	UNUSED (width);
	UNUSED (precision);
	UNUSED (size);

	buffer = va_arg(args, char *);
	if (buffer == NULL)
	{
		buffer = "(null)";
		printed_char = buffer_print(buffer);
	}

	else
	{
		printed_char = buffer_print(buffer);
	}
	return (printed_char);
}
