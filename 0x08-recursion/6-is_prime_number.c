#include "main.h"

/**
 * prime_number - prints prime number
 *
 * Return: 1 or 0
 */

int prime_number(int n)
{
	int i, prim = 1;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			prim = 0;
		break;
	}
	return (prim);
}
