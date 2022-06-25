#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: first string
 * @n: the number of bytes o use from scr
 * @src: second string
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && n > k)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
	return (dest);
}
