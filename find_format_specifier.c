#include "main.h"

/**
 * find_conv_spec - Finds the conversion specifier character
 * @format: The format string to examine
 * @current_ind: the current index where '%' is found in the format string
 * Return: conversion specifier character found
 */
int find_format_specifier(const char *format, int *current_index)
{
	int index;
	int format_specifier_chrs;
	index = *current_index + 1;
	format_specifier_chrs = format[index];

	*current_index =  *current_index + 1;
	return (int format_specifier_chrs);
}
