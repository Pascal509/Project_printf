#include "main.h"

/**
 * get_precision - finds the precision option in the format string
 * @format: The format string to examine
 * @ind: Current index of where '%' is found
 * Return: precision found, else 0
 */
int get_precision(char const *format, int *ind)
{
	int precision = 0;
	int c = *ind + 1;
	int k = c + 1;

	for (; format[c]; c++)
	{
		for (; format[k]; k++)
		{
			if (format[c] == '.' && is_Digit(format[k]))
			{
				precision *= 10 + (format[c + 1] - '0');
				*ind += 1;
			}
			else
				break;
		}
		if (precision != 0)
			return (precision);
	}
	return (0);
}
