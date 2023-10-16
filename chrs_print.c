#include "main.h"

/**
 * chrs_print - Prints a character when the format specifier given is 'c'
 * @ap: Accesses the variable arguments passed to the string
 * @buff: Not handled
 * @flag: Not handled
 * @width: Not handled
 * @precision: Not handled
 * @len_modifier: Not handled
 * Return: Number of character printed
 */

int chrs_print(va_list ap, char buff[], int flags,
		int width, int precision, int len_modifier)
{
	/* Retrieves a character from va_list ap and then outputs it */
	char chrs_printed = va_arg(ap, int);



	return (handle_chrs_write(chrs_printed, buff, flags, width, precision, len_modifier));
}

