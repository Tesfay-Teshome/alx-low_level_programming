#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int index = 1;
char *c = (char *) &index;

return (*c);
}
