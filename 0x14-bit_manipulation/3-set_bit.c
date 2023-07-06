#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: pointer to the numb to change
 * @indx: bit index to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int indx)
{
	if (indx > 63)
	return (-1);

	*n = ((1UL << indx) | *n);
	return (1);
}

