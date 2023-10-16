#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int index, printOut = 0, chrsPrintOut = 0;
	int flags, width, precision, len_modifier, indexed_buffer = 0;
	va_list all;
	char buff[BUFFER_SIZE];

	if (format == NULL)
{
		return (-1);
}
	va_start(all, format);

	for (index = 0; format && format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			buff[indexed_buffer++] = format[index];
			if (indexed_buffer == BUFFER_SIZE)
			{
				printBuffer(buff, &indexed_buffer);
			}
			chrsPrintOut++;
		}
		else
		{
			printBuffer(buff, &indexed_buffer);
			flags = find_flags(format, &index);
			width = find_width(format, &index, all);
			precision = find_precision(format, &index, all);
			len_modifier = find_len_modifier(format, &index);
			++index;
			printOut = handle_printing(format, &index, all, buff,
					flags, width, precision, len_modifier);
			if (printOut == -1)
			{
				return (-1);
			}
			chrsPrintOut += printOut;
		}
	}

	printBuffer(buff, &indexed_buffer);

	va_end(all);

	return (chrsPrintOut);
}
