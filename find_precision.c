#include "main.h"

/**
 * find_precision - Gets the precision value for printing
 * @format: The formatted string
 * @index: Shows the current position within the format string.
 * @ap: Accesses the variable arguments.
 *
 * Return: Precision.
 */
int find_precision(const char *format, int *index, va_list ap)
{
	int current_index = *index + 1;
	int precision = -1;

	/* checks if the character at the current_index is not ('.'). */
	if (format[current_index] != '.')
	{
		return (precision);
	}

	precision = 0;

	/* Checks each character in the format string */
	for (current_index += 1; format[current_index] != '\0'; current_index++)
{
		/**
		 * if it is a number, it multiplies the current width by 10
		 * and adds the number value of the character to the width
		 */
		if (is_Digit(format[current_index]))
		{
			precision *= 10;
			precision += format[current_index] - '0';
		}

	/**
	 * if it is '*', then the current_index is increased and width
	 * will be assigned the number value retrieved by va_arg from va_list.
	 */
		else if (format[current_index] == '*')
		{
			current_index++;
			precision = va_arg(ap, int);
			break;
		}
		else
			break;
}

/* Assigns index to the last processed character */
*index = current_index - 1;

return (precision);
}
