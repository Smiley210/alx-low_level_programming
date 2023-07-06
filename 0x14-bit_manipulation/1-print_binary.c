#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal numb
 * @b: numb to print in binary
 */
void print_binary(unsigned long int b)
{
	int o, count = 0;
	unsigned long int current;

	for (o = 63; o >= 0; o--)
	{
		current = b >> o;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

