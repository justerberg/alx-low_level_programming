#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The num to check bits of
 * @index: The index of the bit to return
 *
 * Return: -1 if an error occurred, or the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}