#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @index: List of arguments to be printed.
 * @args: list of arguments.
 *
 * Return: width.
 */

int get_width(const char *format, va_list args, int *curr_i)
{

	int width = 0;
	int ind = *curr_i + 1;

	for (; format[ind]; ind++)
	{
		if (is_Digit(format[ind])) /* IF the next character is a digit */
		{
		/* Convert char digit to number and assign it to width */
			width *= 10 + (format[ind] - '0');
			*curr_i += 1;
		}
		else if (format[ind] == '*')
		{
			width = va_arg(args, int);
			*curr_i += 1;
			break;
		}
		else
			break;
	}

	return (width);
}
