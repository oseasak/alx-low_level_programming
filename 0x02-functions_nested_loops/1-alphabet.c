#include "main.h"

/**
 * main - Print Alphabet
 *
 * Description: 'Alphabet'
 *
 * Return: void
 */


void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
