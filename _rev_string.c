#include "main.h"

/**
 * _rev_string - function reverses a string
 *
 *@s: char pointer
 *@k: counter through string
 * Return: *s
 */

void _rev_string(char *s, int *k)
{
	int len = _strlen(s);
	int count = len - 1;

	while (count >= 0)
	{
		_putchar(s[count], k);
		count--;
	}
}
