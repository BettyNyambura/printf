#include "main.h"

/**
 * print_binary - Prints decimal in binary
 * @args: List of arguments
 * Return: Number of characters printed
 */

int print_binary(va_list args)
{
	unsigned int num;
	int i, j;
	int binary[32]; // Maximum bits for an unsigned int
	
	num = va_arg(args, unsigned int);
	if (num == 0)
	{
	putChar('0');
	return (1);
	}

	i = 0;
	while (num > 0)
	{
	binary[i] = num % 2;
	num /= 2;
	i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
	putChar('0' + binary[j]);
	}

	return (i);
}
