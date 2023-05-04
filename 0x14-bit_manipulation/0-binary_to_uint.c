#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there was an error
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] == '0' || b[i] == '1')
result = result * 2 + (b[i] - '0');
else
return (0);
}
return (result);
}