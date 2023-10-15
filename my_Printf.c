#include "main.h"
/**
 * _printf - writes formatted output to the stdout
 * @format: pointer the string to print
 * @...: Variable arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int index =  0;
	int format_specifier;
	int chrs_printed = 0;
	int all_chrs_printed = 0;
	char buff[BUFF_SIZE];
	int flag, width, precision, len_modifier;
	va_list args;

	va_start(args, format);
	if (format == NULL) /* IF format is NULL */
	{
		return (-1);
	}

	for (; format[index] != '\0'; index++) /* Iterating through the characters of format */
	{
		if (format[index] != '%') /* To avoid printing percent char */
		{
			chrs_printed = chrs_printed + _putchar(format[index]);
		}
		else
		{
			if (format[index + 1] == '%')
			{
				_putchar(format[index + 1]);
				flag = find_flag(format, &index);
				width = find_width(format, args, &index);
				precision = find_precision(format, &index);
				len_modifier = find_len_modifier(format, &index);
				format_specifier = find_format_specifier(format, &index);
			}
			/* If the conversion char does not match the required */
			if (handle_fmt_spec(format_specifier) == 0)
			{
				return (0);
			}
			all_chrs_printed += handle_fmt_spec(format_specifier)(args, buff, flag, width, precision, len_modifier);
		}
	}
	va_end(args);
	all_chrs_printed = all_chrs_printed + chrs_printed;

	return (all_chrs_printed);
}
