#include "main.h"
/**
 * _rot13 - function that encodes a string using rot13
 * @s: string
 * @k: counter through string
 * Return: void
 */
void _rot13(char *s, int *k)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				_putchar(rot[j], k);
				break;
			}
		}
		if ((!(s[i] > 96 && s[i] < 123)) && (!(s[i] > 64 && s[i] < 91)))
			_putchar(s[i], k);
	}
}
