#include "main.h"

/**
 * _printf - produces output according to format.
 * @format: character string
 *
 * Return: number of characters.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0')
			{
			count = handle_format(format, args, count);
			}
		}
		else
		{
			putChar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * handle_format - handles the format specifiers
 * @format: format string
 * @args: argument list
 * @count: current count of printed characters
 *
 * Return: updated count of printed characters
 */
int handle_format(const char *format, va_list args, int count)
{
	switch (*format)
	{
		case 'b':
			count += print_binary(args);
			break;
		case 'c':
			count += print_character(args);
			break;
		case '%':
			count += print_percent(args);
			break;
		case 's':
			count += print_string(args);
			break;
		case 'i':
			count += print_number(args);
			break;
		case 'd':
			count += print_number(args);
			break;
		case 'u':
			count += print_unsigned(args);
			break;
		case 'o':
			count += print_octal(args);
			break;
		case 'x':
			count += print_hex_lower(args);
			break;
		case 'X':
			count += print_hex_upper(args);
			break;
		case 'S':
			count += print_custom_string(args);
			break;
		case 'p':
			count += print_pointer(args);
			break;
		default:
			_printDefault(format);
			count += 2;
	}
	return (count);
}

