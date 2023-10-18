#include "main.h"
/**
 * print_num_helper - Recursively, helps in printing numbers
 * @num: NUmber to print
 *
 * Return: Number of chars printed
 */
int print_num_helper(int num)
{
	int count = 0;

	if (num < 0)/* IF number is negative, print '-' minus */
	{
		count += _putchar('-'); /*print minus */
		num *= -1; /* Getting the absolute value of num */
	}
	if (num > 9)
	{
		count += print_num_helper(num / 10);
	}
	count += _putchar((num % 10) + '0');

	return (count);
}
