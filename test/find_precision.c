#include "main.h"

/**
 * find_precision - Gets the precision value for printing
 * @format: The formatted string
 * @current_index: Shows the current position within the format string.
 * @ap: List of arguements
 *
 * Return: Precision.
 */

int find_precision(const char *format, int *current_index, va_list all)
{
	int index = *current_index + 1;
	int precision = -1;

	if (format[index] != '.')
	{
		return (precision);
	}

	precision = 0;

	for (index += 1; format[index] != '\0'; index++)
	{
		if (is_Digit(format[index]))
		{
			precision *= 10;
			precision += format[index] - '0';
		}
		else if (format[index] == '*')
		{
			index++;
			precision = va_arg(all, int);
			break;
		}
		else
		{
			break;
		}
	}

	*current_index = index - 1;

	return (precision);
}
