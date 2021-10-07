#include"holberton.h"

/**
 * _print_number - prints a number from input
 * @n: The character to print
 * @k: counter through string
 *
 * Return: void
 */
void _print_number(int n, int *k)
{
	int y;

	if (n == 0)
	{
		_putchar((n + '0'), k);
	}
	else if (n < 0)
	{
		_putchar(('-'), k);
		for (y = 1000000000; y > 0; y = y / 10)
		{
			if (n / y != 0)
			{
				if (n < -214783648)
					_putchar(((((-n / y) % 10) * -1) + '0'), k);
				else
					_putchar((((-n / y) % 10) + '0'), k);
			}
		}
	}
	else
	{
		for (y = 1000000000; y > 0; y = y / 10)
		{
			if (n / y != 0)
			{
				_putchar(((n / y) % 10 + '0'), k);
			}
		}
	}
}
