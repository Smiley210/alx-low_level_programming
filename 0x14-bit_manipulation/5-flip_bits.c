#include "main.h"

/**
 * flip_bits - counts numb of bits to change
 * to get from one numb to another
 * @f: first numb
 * @s: second numb
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int f, unsigned long int s)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = f ^ s;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

