#include "main.h"

/**
 * int_print - Format a number based on width, precision, and flags
 * @buffer: Buffer
 * @flags: Flags
 * @width: Width
 * @precision: Precision specifier
 * @size: Number length
 * @pad: Padding character
 * @args: variable list of arguments
 *
 * Return: Number of characters to print
 */

int int_print(va_list args, char __attribute__((unused))*buffer,
		int flags, int width, int precision, int size)
{
	int n, n_printed = 0, pad = 0;

	UNUSED(precision);
	n = va_arg(args, int);

	n = (size == 'l') ? (long)n : n;

	n = (size == 'h') ? (short)n : n;


	if (flags == '+') /* IF flag is equal to '+' */
	{
		if (width == 0 && n >= 0) /* IF width is 0 and num is positive */
			n_printed += _putchar('+'); /* Print '+' before printing num */
	}

	if (width != 0) /* When wdth is available */
	{
		if (flags == '-')
		{
			pad = width - print_num_helper(n),
			    flags = ' ';
				    for (; pad > 0; pad--)
					    n_printed += _putchar(flags);

			return (n_printed);
		}

		if (flags == '0')
		{
			n_printed = digit_counter(n),
			pad = width - print_num_helper(n);
			for (; pad > 0; pad--)
				n_printed += _putchar(flags);
		}

		if (flags == '+' && n >= 0) /* IF flag is '+' and num is positive*/
			n_printed += _putchar('+'); /* Print '+' before printing num */
	}
	n_printed += print_num_helper(n);

	return (n_printed);
}
