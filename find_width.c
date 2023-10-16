#include "main.h"

/**
 * find_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @index: List of arguments to be printed.
 * @ap: list of arguments.
 *
 * Return: width_seen.
 */

int find_width(const char *format, int *index, va_list ap)
{
	int index_1;
	int width_seen = 0;

	for (index_1 = *index + 1; format[index_1] != '\0'; index_1++)
	{
		if (is_Digit(format[index_1]))
		{
			width_seen *= 10;
			width_seen += format[index_1] - '0';
		}
		else if (format[index_1] == '*')
		{
			index_1++;
			width_seen = va_arg(ap, int);
			break;
		}
		else
			break;
	}

	*index = index_1 - 1;

	return (width_seen);
}
