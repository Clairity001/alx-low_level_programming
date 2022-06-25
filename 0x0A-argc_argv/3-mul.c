#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is a funtion that multiplies two numbers
 * @argc: argc parametre
 * @argv: an array of listed command
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result, num 1, num2;

	if (arg c != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
