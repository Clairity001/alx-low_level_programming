#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haystack: the pointer to the main string
 * @needle: the pointer to the substring
 * Return: the string pointer should be returned
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*hastack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
		return (bahaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
