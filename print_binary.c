#include "main.h"
/**
 * print_binary - Prints decimal in binary
 * @args: List of integers
 *
 * Return: Number of charactres printed
 */
int print_binary(va_list args)
{
	long int Long;
	int a, b;
	int by[255];

	Long = va_arg(args, int);
	if (Long == 0)
	{
		putChar('0');
		return (1);
	}
	a = 0;
	while (Long > 0)
	{
		by[a] = Long % 2;
		Long /= 2;
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		putChar('0' + by[b]);
	}
	return (a);
}
