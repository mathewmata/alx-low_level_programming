#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
