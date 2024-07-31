#include "main.h"
/**
 * _printDefault- Default function
 * @format: pointer to character
 *
 * Return: nothing
 */

void _printDefault(const char *format)
{
	putChar('%');
	putChar(*format);
}
