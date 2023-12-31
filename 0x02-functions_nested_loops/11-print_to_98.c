#include "main.h"
/**
  * print_to_98 - print all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n);
			}
		}
	}
}
