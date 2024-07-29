#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int putChar(char c);
int _printf(const char *format, ...);
int  printS_int(va_list list_of_arg);

#endif
