#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int start_bit;
start_bit = (n >> index);
if (index > 32)
return (-1);
return (start_bit & 1);
}

