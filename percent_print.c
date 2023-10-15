#include "main.h"

/**
 * printPercent - Prints the percent symbol when the format specifier is '%'
 * @ap: Accesses all of the variable arguments
 * @buff: Not handled.
 * @flag: Not handled.
 * @width: Not handled.
 * @precision: Not handled.
 * @len_modif: Not handled.
 * Return: The number of characters printed.
 */
int percent_print(va_list ap, char __attribute__((unused))*buff,
int flag, int width, int precision, int len_modifier)

{
	int chrs_printed = 1;
	(void)ap;
	(void)flag;
	(void)width;
	(void)precision;
	(void)len_modifier;

	return (chrs_printed);
}
