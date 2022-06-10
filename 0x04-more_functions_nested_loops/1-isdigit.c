#include "main.h"
/**
 * _isdigit - checks if the number is between 0 to 9
 * @c: inputs number
 * Return: 1 if it is a number (0 to 9), 0 in other case
 */
int_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
