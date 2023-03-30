#include "main.h"
#include <stdarg.h>


/**
  * printInt - function that calls another function to print an integer
  * @ap: pointer on the next unknown argument
  * Return: the number of numbers printed
  */

int printInt(va_list ap)
{
	int len = 0;
	long n;

	n = va_arg(ap, int);

	len = printInt2(n);
	return (len);
}


/**
  * printInt2 - function that print an integer
  * @n: integer that will be printed
  * Return: the number of numbers printed
  */

int printInt2(long n)
{
	int len = 0;

	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		_putchar('-');
		n = -n;
	}
	if ((n / 10) != 0)
		printInt2(n / 10);
	_putchar(n % 10 + '0');
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
