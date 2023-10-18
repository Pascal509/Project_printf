#include "main.h"

/**
 * get_size - Gets the length to cast the argument
 * @format: Formatted string to print the arguments
 * @index: Acceses the current index.
 *
 * Return: Specified length.
 */

int get_size(char const *format, int *curr_i)
{
	int ind = *curr_i + 1, chars = 0, loop;
	char lenCH[2] = "lh";

	for (; format[ind]; ind++)
	{
		for (loop = 0; lenCH[loop]; loop++)
		{
			if (format[ind] == lenCH[loop])
			{
				*curr_i += 1;
				chars = lenCH[loop];
				return (chars);
			}
		}
		if (lenCH[loop] == '\0')
			break;
	}
	return (0);
}
