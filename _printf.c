#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
  * _printf -  function that prints a string on the standard output
  * @format: string that will be printed
  * Return: the length of the string excluded the character '/0'
  */

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j;
	int len = 0;

	print conversion[] = {
		{"d", printInt},
		{"i", printInt},
		{"c", printChar},
		{"s", printString},
		{"%", printPercent}
	};

	va_start(ap, format);
	i = 0;
	if (format == NULL)
		return (-1);
	while (format != NULL && format[i] != 0)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (j < 5)
			{
				if (format[i + 1] == *(conversion[j].letter))
				{
					len = len + conversion[j].f(ap);
					i += 2;
					break;
				}
				j++;
			}
		}
		if (format[i] == 0)
			break;
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(ap);
	return (len);
}
