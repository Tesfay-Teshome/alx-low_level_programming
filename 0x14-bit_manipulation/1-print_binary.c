#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
int i, start_count = 0;
unsigned long int start_point;

for (i = 63; i >= 0; i--)
{
start_point = n >> i;

if (start_point & 1)
{
_putchar('1');
start_count++;
}
else if (start_count)
_putchar('0');
}
if (!start_count)
_putchar('0');
}

