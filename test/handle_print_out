#include "main.h"

/**
* handle_printing - Print the charactrs according to the format specifiers
 * @fmt_spec: Formatted string in which to print the arguments.
 * @ap: variable arguments
 * @index_1: index of the character.
 * @buff: Array to store print.
 * @flags: Find active flags
 * @width: find width.
 * @precision: Precision specification
 * @len_modifier: length specifier
 * Return: -1, if format specifier is not found.
 */


int handle_printing(const char *fmt_spec, int *index_1, va_list ap,
		char buff[], int flags, int width, int precision, int len_modifier)
{
	int handle_printing;

	handle_printing = match_fmt_specifier(fmt_spec, index_1,
ap, buff, flags, width, precision, len_modifier);

	if (handle_printing == -1)
	{
		handle_printing = handle_unsupported_fmts(fmt_spec, index_1, width);
	}

	return (handle_printing);
}
