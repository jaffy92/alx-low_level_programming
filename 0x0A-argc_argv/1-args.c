#include "main.h"
#include <stdio.h>
/**
 * main - print a number, followed by new line
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
