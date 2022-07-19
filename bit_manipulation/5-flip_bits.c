#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip to get n to m
 * @n: number 1
 * @m: number 2
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux = n ^ m;
	unsigned int flip = 0;

	while (aux > 0)
	{
		if (aux & 1)
			flip++;
		aux = aux >> 1;
	}
	return (flip);
}
