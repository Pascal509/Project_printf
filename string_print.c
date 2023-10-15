#include "main.h"
/**
 * string_print - Prints a string when the format specifier is 's'
 * @ap: List type "all" of the variable arguments
* @buff: Variable that holds the converted format specifier
 * @flag: Not handled
 * @width: Not handled
 * @precision: Not handled
 * @len_modif: Not handled
 * Return: Number of characters printed
 */

int _string_print(va_list ap, char *buff, int flag, int width,
		int precision, int length_modifier)

{

	int printed_chrs = 0;
	(void)flag;
	(void)width;
	(void)precision;
	(void)length_modifier;

/* Assigns the buff pointer to the value retrieved from the va_list ap using va_arg */
	buff = va_arg(ap, char *);

/* Calls the printBuffer function with buff, if buff is null */
	if (buff == NULL)
	{
		buff = "(null)";
		printed_chrs = printBuffer(buff);
	}

	else
		printed_chrs = printBuffer(buff);

	return (printed_chrs);
}
