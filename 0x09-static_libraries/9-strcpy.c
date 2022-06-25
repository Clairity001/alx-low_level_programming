#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - a function that copies strings pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char *pointer = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (pointer);
}
