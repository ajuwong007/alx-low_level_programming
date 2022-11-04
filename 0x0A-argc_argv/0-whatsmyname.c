#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the programme
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
