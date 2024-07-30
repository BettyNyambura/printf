#include "main.h"
/**
 * _printDefault- Default function
 * @format: pointer to character
 * @args: character of string
 *
 * Return: nothing
 */
void _printDefault(__attribute__((unused))va_list args, const char *format)
{
	putChar('%');
	putChar(*format);
}
