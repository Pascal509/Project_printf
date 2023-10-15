#include "main.h"

/**
 * find_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @current_index: List of arguments to be printed.
 * @ap: list of arguments.
 *
 * Return: width_seen.
 */

int find_width(const char *format, va_list ap, int *current_index)
{
	int width_seen = 0;
	int index = *current_index + 1;

	while (format[index] != '\0')
	{
		/* If the next index is a number */
		if (is_Digit(format[index])) /* IF the next character is a digit */
		{
			/**
			 * Multiplies the current width by 10 and add
			 * the char digit to the width, then, assign it to width
			 */
			width_seen *= 10 + (format[index] - '0');
			*current_index++;
		}
		/**
		 * If it is '*', then the current_index is increased and width
		 * will be assigned the number value retrieved by va_arg from va_list.
		 */
		else if (format[index] == '*')
		{
			width_seen = va_arg(ap, int);
			*current_index++;
			break;
		}
		else
		{
			break;
		}
		index++;
	}

	return (width_seen);
}
