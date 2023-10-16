#include "main.h"

/**
 * find_len_modifier - Gets the length to cast the argument
 * @format: Formatted string to print the arguments
 * @index: Acceses the current index.
 *
 * Return: Specified length.
 */
int find_len_modifier(const char *format, int *index)
{
	int main_index = *index + 1;
	int len = 0;

/* Checks if the format specifier is 'l' and assigns LONG int to it.*/
	if (format[main_index] == 'l')
	{
		len = LENGTHY;
	}

/* Checks if the format specifier is 'h' and assigns SHORT int to it.*/
	else if (format[main_index] == 'h')
	{
		len = SHORTY;
	}

/* If 'l' or 'h' is found, then length = 0 */
	if (len == 0)
	{
/* Index is assigned at the last processed character */
		*index = main_index - 1;
	}
	else
	{
 /* Index is at the current character */
		*index = main_index;
	}
	return (len);
}
