#include <stdio.h>
/**
 * main - this is a function that prints all arguments it receives
 * @argc: argc parametre
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
