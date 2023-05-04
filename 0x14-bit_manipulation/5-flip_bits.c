#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int bit_count, i;

	bit_count = 0;
	result = 1;
	difference = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (difference & result))
			bit_count++;
		result <<= 1;
	}

	return (bit_count);
}
