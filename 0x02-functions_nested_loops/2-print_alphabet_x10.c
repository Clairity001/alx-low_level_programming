#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - This program prints alphabets 10 times
 * Description: To print alphabets
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar ('\n');
	}
}
