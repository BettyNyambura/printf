#include "main.h"
#include <string.h>
/**
 * print_string - Prints String
 * @args: String arguments
 *
 * Return: Length of string
 */
int print_string(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		putChar(*str);
		str++;
		i++;
	}
	return (i);
}
