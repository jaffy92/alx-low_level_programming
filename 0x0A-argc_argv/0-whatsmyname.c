#include "main.h"
#include <stdio.h>
/**
 * main - print the program own name
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
