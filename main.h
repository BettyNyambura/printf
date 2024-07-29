#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _putChar(char c);
int _printf(const char *format, ...);
int print_int(va_list list_of_arg);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
