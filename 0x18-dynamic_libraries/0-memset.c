#include "main.h"

/**
 * *_memset - se memory with bits
 * @p: pointerr toput a constant
 * @n: max bytes to use
 * @b: bit constant
 * Return: p
 */

char *_memset(char *p, char b, unsigned int n)
{
	unsigned int i;
	for(i = 0; n >0; i++, n--)
	{
		p[i] = b;
	}
	return (p);
}
