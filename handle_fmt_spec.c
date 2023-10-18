#include "main.h"

/**
 * handle_fmt_spec - Match the format specifiers to their
 * corresponding functions that handle their formatting
 * @ap: variable list of arguments
 * @buff: Array to store print.
 * 
 * Return: -1, if format specifier is not found.
 */

int (*handle_fmt_spec(char fmt_spec))(va_list args, char *buff, int, int, int, int)
{
	int ind;
	format func[] = {
		{'c', chars_print},
		{'s', string_print},
		{'%', percent_print},
				{'i', int_print},
		//		{'d', int_print},
		//		{'b', binary_print},
		//		{'u', print_unsigned},
		//		{'o', print_octal},
		//		{'x', hexadecimal},
		//		{'X', print_hexa_upper},
		//		{'p', print_pointer},
		//		{'S', print_non_printable},
		//		{'r', reverse},
		//		{'R', print_rot13string},
		{NULL, NULL}
	};

	/**
	 * Loops through the funcs array to check if
	 * the format specifier matches the char
	 */

	while (func[ind].fmt_spec != 0 && func[ind].fmt_spec != fmt_spec)
	{
		ind++;
	}
	if (func[ind].fmt_spec == 0)
	{
		return (0);
	}
	return (func{ind].function);
	}
