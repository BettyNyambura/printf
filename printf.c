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
				default:
					_printDefault(args, format);
					count += 2;
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
