#include "main.h"

/**
 * print_hex_upper - prints an unsigned integer in hexadecimal
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_hex_upper(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int len = 0;
	char buffer[9];
	int i = 8;

	if (n == 0)
	{
	putChar('0');
	return (1);
	}

	buffer[i--] = '\0';

	while (n > 0)
	{
	int digit = n % 16;

	if (digit < 10)
	buffer[i--] = digit + '0';
	else
	buffer[i--] = (digit - 10) + 'A';
	n /= 16;
	}

	while (buffer[++i] != '\0')
	{
	putChar(buffer[i]);
	len++;
	}

	return (len);
}
