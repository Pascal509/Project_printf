#include "main.h"


int handle_unsupported_fmts(const char *fmt_spec, int *index_1, int width)
{

	int len_anon = 0;
	/* Checks for unsupported format*/
	if (fmt_spec[*index_1] == '\0')
	{
		return (-1);
	}
	len_anon += write(1, "%%", 1);



	/* Checks the character before the '%' was space, and adds a space. */
	if (fmt_spec[*index_1 - 1] == ' ')
	{
		len_anon += write(1, " ", 1);
	}

	/* If the width is not zero, it scans the string backward.*/
	else if (width)
	{
		--(*index_1);
		/* Loops backward till it get to ' ' or '%', checks for width specification */
		while (fmt_spec[*index_1] != ' ' && fmt_spec[*index_1] != '%')
		{
			--(*index_1);
		}
		/* If the current index is space, it returns 1*/
		if (fmt_spec[*index_1] == ' ')
		{
			--(*index_1);
			return (1);
		}
	}
	len_anon += write(1, &fmt_spec[*index_1], 1);
	return (len_anon);
}
