#include "main.h"

/**
* handle_num_chrs - Formats and prints digit
 * @less_than_0: checks for negative numbers
 * @index: char types.
 * @buff: Array to hold characters to print
 * @flags:  Shows all active flags
 * @width: finds the width.
 * @precision:  specifies the precision
 * @len-modifier: Specifies the length
 *
 * Return: Number of chars printed.
 */
int handle_num_chrs(int less_than_0, int index, char buff[],
		int flags, int width, int precision, int len_modifier)
{
	int len = BUFFER_SIZE - index - 1;
	char padin = ' ', xtra_chrs = 0;

	(void) len_modifier;


/* checks the flags to find the value of padd and extra_ch */
	if ((flags & IS_ZERO) && !(flags & IS_MINUS))
	{
		padin = '0';
	}

	if (less_than_0)
	{
		xtra_chrs = '-';
	}
	else if (flags & IS_PLUS)
	{
		xtra_chrs = '+';
	}
	else if (flags & BLANK_SPACE)
	{
		xtra_chrs = ' ';
	}
	return (format_num(index, buff, flags, width, precision,
				len, padin, xtra_chrs));
}
