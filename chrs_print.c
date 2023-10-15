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

int chrs_print(va_list ap, char __attribute__((unused))*buff, int flag,
		int width, int precision, int len_modifier)
{
	int chrs_printed;

	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modifier;

/* Retrieves a character from va_list ap and then outputs it */

	chrs_printed = _putchar(va_arg(ap, int));

	return (chrs_printed);
}
