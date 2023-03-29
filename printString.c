#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
  * printString - function that prints a string
  * @ap: pointer on the next unknown argument
  * Return: he length of the string excluded the character '/0'
  */

int printString(va_list ap)
{
	int len = 0;
	char *ptr;
	int j;

	ptr = va_arg(ap, char*);
	if (ptr == NULL)
		ptr = "(null)";
	for (j = 0; ptr[j] != 0; j++)
	{
		_putchar(ptr[j]);
		len++;
	}
	return (len);
}
