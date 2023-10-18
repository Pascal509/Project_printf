#include "main.h"

/**
 * match_fmt_specier - Match the format specifiers to their
 * corresponding functions that handle their formatting
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

int match_fmt_specifier(const char *fmt_spec, int *index_1, va_list ap,
		char buff[], int flags, int width, int precision, int len_modifier)
{
	int index;
/*	len_anon = 0;
	printedChrs = -1; */

	format func[] = {
		{'c', chrs_print},
		{'s', string_print},
		{'%', percent_print},
/**		{'i', print_int},
*		{'d', print_int},
*		{'b', print_binary},
*		{'u', print_unsigned},
*		{'o', print_octal},
*		{'x', print_hexadecimal},
*		{'X', print_hexa_upper},
*		{'p', print_pointer},
*		{'S', print_non_printable},
*		{'r', print_reverse},
*		{'R', print_rot13string}, */
		{0, 0}
	};

	/**
	 * Loops through the funcs array to check if
	 * the format specifier matches the char
	 */
	index = 0;
	while (func[index].fmt_spec != '\0')
	{
		/**
		 * Calls the function for the format specifier,
		 * if a match  is found
		 */
		if (fmt_spec[*index_1] == func[index].fmt_spec)
		{
			return (func[index].function(ap, buff, flags,
						width, precision, len_modifier));
		}
		index++;
	}


	return (-1);
}
