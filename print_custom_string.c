#include "main.h"
#include <ctype.h>

/**
 * print_custom_string - prints a string with custom format
 * @arg: argument to print
 * Return: number of characters printed
 */

int print_custom_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int len = 0;
	char *hex = "0123456789ABCDEF";

	if (str == NULL)
	{
	str = "(null)";
	}

	while (*str)
	{
	if (*str < 32 || *str >= 127)
	{
	putChar('\\');
	putChar('x');
	putChar(hex[*str / 16]);
	putChar(hex[*str % 16]);
	len += 4;
	}
	else
	{
	putChar(*str);
	len++;
	}
	str++;
	}
	return (len);
}
