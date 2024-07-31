#include "main.h"
#include <stdint.h>

/**
 * print_pointer - prints a pointer address in hexadecimal format
 * @arg: argument to print
 * Return: number of characters printed
 */

int print_pointer(va_list arg)
{
	void *ptr = va_arg(arg, void *);
	uintptr_t address = (uintptr_t)ptr;
	int len = 0;
	char hex_chars[] = "0123456789abcdef";
	char *prefix = "0x";
    
	if (ptr == NULL)
	{
	write(1, "(nil)", 5);
	return (5);
	}

	write(1, prefix, 2);
	len += 2;

	if (address == 0)
	{
	putChar('0');
	len++;
	}
	else
	{
	int shift = sizeof(uintptr_t) * 2 - 1;
	while ((address >> (shift * 4)) == 0 && shift > 0)
	shift--;
        
	while (shift >= 0)
	{
	char digit = hex_chars[(address >> (shift * 4)) & 0xF];
	putChar(digit);
	len++;
	shift--;
	}
	}

	return (len);
}
