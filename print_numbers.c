#include "main.h"

/**
 * print_number - prints numbers
 * @args: String argument
 *
 * Return: Number of intergers
 */

int  print_number(va_list args)
{
	int num = va_arg(args, int);
	int value = 0;
	unsigned int a;
	int  divisor = 1;

	if (num < 0)
	{
		value = putChar('-');
		a = num * -1;
	}
	else
	{
		a = num;
	}
	while (a / divisor > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		value += putChar('0' + a / divisor);
		a %= divisor;
		divisor /= 10;
	}
	return (value);
}
