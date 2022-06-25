#include <stdio.h>
/**
 * main - this is a function that prints all the arguments it receives
 * @argc: argc parametre
 * @argv: an array of command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
