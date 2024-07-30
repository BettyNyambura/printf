#include "main.h"
/**
 * print_character- Prints characters
 * @args: String argument
 *
 * Return: Number of intergers
 */

int print_character(va_list args)
{
	int i = 0;
	char character;

	character = va_arg(args, int);
	i = putChar(character);
	return (i);
}
