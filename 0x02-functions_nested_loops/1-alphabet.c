#include "main.h"
/**
 * print_alphabet :  print the alphabet,
 *                   in lowercase,
 *                   followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
		_putchar(L);
	_putchar('\n');
}
