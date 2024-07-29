#include "main.h"
/**
 * _printf - produces output according to format.
 * @format: character string
 *
 * Return: number of characters.
 */

int _printf(const char *format, ...)
{
int char_print = 0;
va_list list_of_arg;

if (format == NULL)
	return (-1);

va_start(list_of_arg, format);
	while (*format)
	{
	if (*format != '%')
	{
	write(1, format, 1);
	char_print++;
	}
	else
	{
	format++;
	if (*format == '\0')
	break;
	}

	if (*format == '%')
	{
	write(1, format, 1);
	char_print++;
	}
	else if (*format == 'c')
	{
	char c = va_arg(list_of_arg, int);

	write(1, &c, 1);
	char_print++;
	}

	else if (*format == 's')
	{
	char *str = va_arg(list_of_arg, char *);
	int str_len = 0;

	while (str[str_len] != '\0')
	str_len++;
	write(1, str, str_len);
	char_print += str_len;
	}

	format++;

	}

va_end(list_of_arg);
return (char_print);
}
