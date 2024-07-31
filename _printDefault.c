#include "main.h"

/**
 * _printDefault - prints unknown format specifier
 * @args: argument list
 * @format: format string
 */

void _printDefault(__attribute__((unused))va_list args, const char *format)
{
	putchar('%');
	putchar(*format);
}
