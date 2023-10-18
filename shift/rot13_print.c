#include "main.h"

/**
 * rot13_print - Print a string in rot13.
 * @args: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of chars printed
 */

int rot13_print(va_list args, char *buffer, int flags, int width,
		int precision, int size)

{
	int ind, jo;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	buffer = va_arg(args, char *);

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (buffer == NULL)
		buffer = "(AHYY)";
	for (ind = 0; buffer[ind]; ind++)
	{
		for (jo = 0; in[jo]; jo++)
		{
			if (in[jo] == buffer[ind])
			{
				count += _putchar(out[jo]);
				break;
			}
		}
		if (!in[jo])
		{
			count += _putchar(buffer[ind]);
		}
	}
	return (count);
}
