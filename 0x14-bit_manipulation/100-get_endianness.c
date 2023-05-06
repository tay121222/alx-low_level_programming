#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	byte b;
	b.a = 1;
	return ((int) b.a);
}
