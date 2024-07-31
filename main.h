#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int print_string(va_list args);
int print_character(va_list args);
int print_percent(__attribute__((unused))va_list args);
int  print_number(va_list args);
int print_binary(va_list args);
void _printDefault(const char *format);
int putChar(char c);
int handle_format(const char *format, va_list args, int count);
int print_unsigned(va_list arg);
int print_octal(va_list arg);
int print_hex_lower(va_list arg);
int print_hex_upper(va_list arg);
int print_custom_string(va_list arg);
#endif
