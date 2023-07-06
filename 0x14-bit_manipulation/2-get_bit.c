#include "main.h"

/**
 * get_bit - returns value of a bit at an index in a decimal numb
 * @s: numb to search
 * @indx: the bit index
 * Return: the bit value
 */
int get_bit(unsigned long int s, unsigned int indx)
{
	int bit_val;

	if (indx > 63)
		return (-1);

	bit_val = (s >> indx) & 1;

	return (bit_val);
}

