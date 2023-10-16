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

int string_print(va_list ap, char buff[],
		int flags, int width, int precision, int len_modifier)
{
	int len = 0, index;
	char *s = va_arg(ap, char *);

	(void) buff;
	(void) flags;
	(void) width;
	(void) precision;
	(void) len_modifier;


	if (s == NULL)
	{
		s = "(null)";
		if (precision >= 6)
			s = "      ";
	}

	while (s[len] != '\0')
{
		len++;
}
	if (precision >= 0 && precision < len)
	{
		len = precision;
	}
	if (width > len)
	{
		if (flags & IS_MINUS)
		{
			write(1, &s[0], len);
			for (index = width - len; index > 0; index--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (index = width - len; index > 0; index--)
				write(1, " ", 1);
			write(1, &s[0], len);
			return (width);
		}
	}

	return (write(1, s, len));
}
