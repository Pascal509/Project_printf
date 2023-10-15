#include "main.h"

/**
 * find_precision - Gets the precision value for printing
 * @format: The formatted string
 * @current_index: Shows the current position within the format string.
 *
 * Return: Precision.
 */
int find_precision(const char *format, int *current_index)
{
	int precision, index, index_1;

	precision = 0;
	/* Checks each character in the format string */
	index = *current_index + 1;
	while (format[index] != '\0')
	{

		index_1 = index + 1;
		while (format[index_1]  != '\0')
		{
			/**
			 * If the character at the current_index is ('.') and
			 * also a number, then multiply the current precision by 10
			 * and add the number value of the character to the width
			 * Finally, increase the current index by 1
			 */

			if (format[index] == '.' && is_Digit(format[index_1]))
			{
				precision = precision * 10 + (format[index + 1] - '0');
				*current_index += 1;
			}
			else
			{
				break;
			}
			index_1++;

		}

		/* Checks if precision is not 0 and return precision if so */
		if (precision != 0)
		{
			return (precision);
		}
		index++;
	}
	return (0);
}
