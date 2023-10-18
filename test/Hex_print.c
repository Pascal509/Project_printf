#include "main.h"

/**
 * hex_print - formats an hexadecimal digit to lower or upper case
 * @ap: variable list of arguments
 * @towards: Array of values to connect the number to
 * @buff: Array to formatted digit
 * @flags:  Calculates active flags
 * @flagsCH: Find active flags
 * @width: find width
 * @precision: Precision specifier
 * @len_modifier: Length specification
 * Return: Number of characters printed
 */
int hex_Print(va_list ap, char towards[], char buff[],
	int flags, char flagsCH, int width, int precision, int len_modifier)
{
	int index = BUFFER_SIZE - 2;
	unsigned long int digit = va_arg(ap, unsigned long int);
	unsigned long int digit_init = digit;

	(void) width;

	digit = conv_unsignd_len_modifier(digit, find_len_modifier);

	if (digit == 0)
		buff[index--] = '0';

	buff[BUFFER_SIZE - 1] = '\0';

	while (digit > 0)
	{
		buff[index--] = towards[digit % 16];
		digit /= 16;
	}

	if (flags & IS_HASH && digit_init != 0)
	{
		buff[index--] = flagsCH;
		buff[index--] = '0';
	}

	index++;

	return (format_unsgnd(0, index, buff, flags, width, precision, len_modifier));
}
