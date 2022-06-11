#include "main.h"
/**
 * print_triangle - This method prints triangle
 * @size: the size of the triangle
 * Description: to print triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, x, space;

	for (i = 0; i < size; i++)
	{
		for (space = size - 1 - i; space > 0; space--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
