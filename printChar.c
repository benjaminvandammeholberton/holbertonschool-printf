#include "main.h"
#include <stdarg.h>

/**
  * printChar - function that print a character
  * @ap: pointer on the next unknown argument
  * Return: 1, the length of one character
  */

int printChar(va_list ap)
{
	int len = 0;

	_putchar(va_arg(ap, int));
	len++;
	return (len);
}
