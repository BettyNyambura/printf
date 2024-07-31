#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_unsigned(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int len = 0;
	char buffer[11];
	int i = 10;

	if (n == 0)
	{
	putChar('0');
	return (1);
	}

	buffer[i--] = '\0';

	while (n > 0)
	{
	buffer[i--] = (n % 10) + '0';
	n /= 10;
	}

	while (buffer[++i] != '\0')
	{
	putChar(buffer[i]);
	len++;
	}
	return (len);
}
