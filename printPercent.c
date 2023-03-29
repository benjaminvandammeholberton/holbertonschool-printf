#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
  * printPercent - function that print the character '%'
  * @ap: pointer on the next unknown argument
  * Return: 1, the length of one character
  */

int printPercent(va_list ap)
{
	int len = 0;

	(void) ap;
	_putchar('%');
	len++;
	return (len);
}
