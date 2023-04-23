#include "main.h"

/**
 * binary_to_unt - converts a binary num to 
 * unsigned int.
 * @y: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_unt(const char *y)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; y[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (y[len] != '0' && y[len] != '1')
		{
			return (0);
		}

		if (y[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}}
