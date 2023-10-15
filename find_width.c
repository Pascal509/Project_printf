#include "main.h"

/**
 * find_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @index: List of arguments to be printed.
 * @ap: list of arguments.
 *
 * Return: width.
 */
int find_width(const char *format, int *index, va_list ap)
{


	int current_index;
	int width = 0;

	/* Checks each character in the format string */
	for (current_index = *index + 1; format[current_index] != '\0';
			current_index++)
	{

		/**
		 * If it is a number, it multiplies the current width by 10
		 * and adds the number value of the character to the width
		 */
		if (is_Digit(format[current_index]))
		{
			width *= 10;
			width += format[current_index] - '0';
		}

		/**
		 * If it is '*', then the current_index is increased and width
		 * will be assigned the number value retrieved by va_arg from va_list.
		 */
		else if (format[current_index] == '*')
		{
			current_index++;
			width = va_arg(ap, int);
			break;
		}
		else
			break;
	}

	/* Assigns index to the last processed character */
	*index = current_index - 1;

	return (width);
}
