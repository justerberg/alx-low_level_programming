#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: Pointer to the number to modify
 * @index: Index of the bit to set
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

mask = 1 << index;
*n |= mask;

return (1);
}