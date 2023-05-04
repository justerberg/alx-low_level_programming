#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

mask = 1 << index;
*n |= mask;

return (1);
}
