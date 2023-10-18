#include "main.h"

/**
 * hexa_print - Prints the hexadecimal notation of an unsigned integer
 * @conv: number to convert into
 * @x: Unsigned number to convert
 * Return: Number of characters printed
 */

int hexa_print(char conv[17], unsigned int x)
{
	int ind, count = 0;
	unsigned int h16[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	if (x > 15)
	{
		count += hexa_print(conv, x / 16);
	}

	ind = 0;
	while (ind < 16)
	{
		if (h16[ind] == (x % 16))
		{
			count += _putchar(conv[ind]);
			break;
		}
		ind++;
	}

	return (count);
}
