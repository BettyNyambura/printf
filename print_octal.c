#include "main.h"

/**
 * print_octal - prints an unsigned integer in octal format
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_octal(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int len = 0;
	char buffer[12];
	int i = 11;

	if (n == 0)
	{
	putChar('0');
	return (1);
	}

	buffer[i--] = '\0';

	while (n > 0)
	{
	buffer[i--] = (n % 8) + '0';
	n /= 8;
	}

	while (buffer[++i] != '\0')
	{
	putChar(buffer[i]);
	len++;
	}

	return (len);
}
