#include "main.h"

/**
 * handle_fmt_spec - Position the format specifiers to their
 *corresponding functions that handle their formatting.
 * @fmt_spec: Specified format specifier character
 * @@buff: Buffer array to handle print.
 * @int: integer parameters
 *
 * Return: The function to handle the formatte  printing
 */

int (*handle_fmt_spec(char format_specifier))(va_list ap, char *buff,
		int, int, int, int)

{
	int index;
	format funcs[] = {
		{'c', chrs_print},
		{'s', string_print},
		{'%', percent_print},
		{0, 0}
	};

	/* Loops through the funcs array to find a match for the format specifier */
	for (index = 0; funcs[index].format_specifier != 0 &&
			funcs[index].format_specifier != format_specifier; index++)
	{

	}
	if (funcs[index].format_specifier == 0)
	{
		return (0);
	}
	return (funcs[index].function);
}
