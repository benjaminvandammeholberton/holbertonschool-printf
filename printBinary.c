#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int printBinary2(unsigned int n);

/**
  * printBinary -  function that convert and print a decimal in binary.
  * @ap: next unknow argument.
  * Return: the number of character printed
  */
int printBinary(va_list ap)
{
	unsigned int n = va_arg(ap, int);
	int len = 0;

	len = printBinary2(n);
	return (len);
}

/**
  * printBinary2 -  function that convert and print a decimal in binary.
  * @n: unsigned int that will be converted
  * Return: the number of characters printed
  */
int printBinary2(unsigned int n)
{
	int binaryNum[32];
	int i = 0;
	int j;
	int len = 0;

	if (n == 0)
	{
		_putchar(0 + '0');
		len++;
	}
	while (n > 0)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(binaryNum[j] + '0');
		len++;
	}
	return (len);
}
