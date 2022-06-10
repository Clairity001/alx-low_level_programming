#include "main.h"
/**
 * _isupper - evaluates if letter is uppercase
 * Description: prints the alphabet with _putchar
 * @c: input character
 * Return: 1 if is an uppercase characetr, 0 in other case
 */

int _isupper(int c)
{
	if (c >= 65 && <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
