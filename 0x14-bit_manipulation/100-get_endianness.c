#include "main.h"
#include <stdint.h>
/**
 * get_endianness - checks the endianness
 * Return: void
 */

int get_endianness(void)
{
unsigned int uni;
char *c;

uni = 0x86543210;
c = (char *)&uni;

return (*c == 0x10);
}
