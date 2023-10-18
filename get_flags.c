#include "main.h"
/**
 * find_flags - Searches the flag option in the format string
 * @format: The format string to check
 * @index: The current index where the '%' char is found
 *
 * Return: flags if seen, else 0;
 */


int get_flag(const char *format, int *curr_i)
{
	int ind_1;
	int ind = *curr_i + 1;
	char flags_ch[] = "+ #";
	char flags_num[] = "123";

	/* Examine two char after the percent '%' char */
	for (; format[ind] != format[*curr_i + 3] || format[ind];)
	{
		for (ind_1 = 0; flags_ch[ind_1]; ind_1++)
		{
			if (format[ind] == flags_ch[ind_1])
				break;
		}

		if (flags_ch[ind_1] == '\0')
			return (0);

		if (flags_ch[ind_1] == ' ') /* To ignore space */
		{
			*curr_i += 1; /* and update current index to be the next option */
			ind++; /* Go to the next option */
		}

		else
		{/* IF the next character is a ' ' char */
			if (format[ind + 1] == flags_ch[1])
				*curr_i += 1; /* Increment the index twice to be on the ' ' char */
			*curr_i += 1;
			return (flags_num[ind_1]);
		}
	}
	return (0);
}
