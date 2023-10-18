#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>




/**
 * struct format - Struct op
 *
 * @format: The format specifier.
 * @function: The function therein.
 */

typedef struct format
{
        char fmt_spec;
        int (*function)(va_list, char *, int, int, int, int);
} format;

 #define BUFFER_SIZE 1024
 #define UNUSED(x) (void)(x)


int _putchar(char c);

int _printf(const char *format, ...);

int percent_print(va_list ap, char __attribute__((unused))buff[], 
		int flag, int width, int precision, int len_modifier);

int binary_print(va_list args, char __attribute__((unused))*buffer, int flags, 
		int width, int precision, int size);

int is_Digit(int n);

int buffer_print(char *buffer);

int digit_counter(int num);

int char_print(va_list args, char __attribute__((unused))*buffer, int flags, 
		int width, int precision, int size);


int get_flag(const char *format, int *curr_i);

int get_fmt_spec(const char *format, int *current_index);

int get_precision(char const *format, int *ind);

int get_size(char const *format, int *curr_i);

int get_width(const char *format, va_list args, int *curr_i);

int (*handle_fmt_spec(char fmt_spec))(va_list, char *, int, int, int, int);

int hex_lowerCase_print(va_list args, char __attribute__((unused))*buffer, 
		int flags, int width, int precision, int size);

int hex_upperCase_print(va_list args, char __attribute__((unused))*buffer, 
		int flags, int width, int precision, int size);

int int_print(va_list args, char __attribute__((unused))*buffer, 
		int flags, int width, int precision, int size);

int is_Digit(int n);

int _printf(const char *format, ...);

int percent_print(va_list args, char __attribute__((unused))buff[], 
		int flags, int width, int precision, int size);

int hexa_print(char conv[17], unsigned int x);

int print_num_helper(int num);

int reverse_print(va_list args, char *buffer, int flags, int width, 
		int precision, int size);

int rot13_print(va_list ap, char *buff, int flag, int width, 
		int precision, int size);

int string_print(va_list args, char *buffer, int flags, int width, 
		int precision, int size);

int get_precision(char const *format, int *index);


#endif
