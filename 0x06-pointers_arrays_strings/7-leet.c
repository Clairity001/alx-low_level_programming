#include "main.h"
/**
 * leet - encode a string into 1337
 * @ptr: This function encodes some chars
 * Return: char
 */
char *leet(char *ptr)
{
	int count, len;

	len = 0;
	while (*(ptr + len) != '\10')
	{
		len++;
	}
	for (count = 0; count <= len; count++)
	{
		if (*(petr + count) == 'a' || *(ptr + count) == 'A')
			*(ptr + count) = '4';
		if (*(ptr + count) == 'e' || *(ptr + count) == 'E')
			*(ptr + count) = '3';
		if ((*ptr + count) == 'o' || *(ptr + count) == 'O')
			*(ptr + count) = '0';
		if (*(ptr + count) == 't' || *(ptr + count) == 'T')
			*(ptr + count) = '7';
		if (*(ptr + count) == 'l' || *(ptr + count) == 'L')
			*(ptr + count) = '1';
	}
	return (ptr);
}
