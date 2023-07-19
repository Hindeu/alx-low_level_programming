#include "main.h"
/**
 * _islower - check for lowercase char
 * @c : the character to be checked
 *
 * return : 1 for lowercase and 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
