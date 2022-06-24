#include <stdio.h>
/**
 * main - this is a function to print out the file name even after modification
 * @argc: argc parametre
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
