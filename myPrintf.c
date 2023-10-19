#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 *  @...: Variable arguments
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int index = 0,  printedChars = 0, fmt_spec, printOut = 0;
	int flags, width, precision, size;
	va_list types;
	char buffer[BUFFER_SIZE];


	va_start(types, format);
	if (format == NULL) /* IF format is NULL */
		return (-1);

	while (format[index]) /* Iterating through the characters of format */
	{
		if (format[index] != '%') /* To avoid printing percent char */
			printedChars += _putchar(format[index]);
		else
		{
			if (format[index + 1] == '%')
				_putchar(format[index + 1]);
			flags = get_flag(format, &index);
			width = get_width(format, types, &index);
			precision = get_precision(format, &index);
			size = get_size(format, &index);
			fmt_spec = get_fmt_spec(format, &index);

			/* If the conversion char does not match the required */
			if (handle_fmt_spec(fmt_spec) == 0)
				return (0);

			printOut += handle_fmt_spec(fmt_spec)(types,
					buffer, flags, width, precision, size);
		}
		index++;
	}
	va_end(types);
	printOut += printedChars;

	return (printOut);
}
