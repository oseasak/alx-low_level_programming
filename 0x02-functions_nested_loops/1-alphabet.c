#include "main.h"

/**
 * main - Print Alphabet
 *
 * Description: 'Alphabet'
 *
 * Return: 0
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
