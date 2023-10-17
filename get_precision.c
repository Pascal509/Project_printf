#include "main.h"

/**
 * get_precision - finds the precision option in the format string
 * @format: The format string to examine
 * @index: Current index of where '%' is found
 * Return: precision found, else 0
 */
int get_precision(char const *format, int *index)
{
	int precision = 0;
	int i = *index + 1;
	int j = i + 1;

	for (; format[i]; i++)
	{
		for (; format[j]; j++)
		{
			if (format[i] == '.' && isDigit(format[j]))
			{
				precision *= 10 + (format[i + 1] - '0');
				*index += 1;
			}
			else
				break;
		}
		if (precision != 0)
			return (precision);
	}
	return (0);
}
