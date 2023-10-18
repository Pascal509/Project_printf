#include "main.h"

/**
 * print_rot13string - Print a string in rot13.
 * @args: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of chars printed
 */

int printRot13(va_list ap, char *buff, int flag, int width,
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
			if (in[jo] == buff[ind])
			{
				count += _putchar(out[jo]);
				break;
			}
		}
		if (!in[j])
		{
			count += _putchar(buff[i]);
		}
	}
	return (count);
}
