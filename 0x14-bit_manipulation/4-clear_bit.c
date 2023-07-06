#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @n: pointer to the numb to change
 * @indx: bit index to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int indx)
{
	if (indx > 63)
	return (-1);

	*n = (~(1UL << indx) & *n);
	return (1);
}

