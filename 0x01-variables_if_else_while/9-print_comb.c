#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
int n;
n = 0;
while (n <= 9)
{
	putchar ('0' + n);
	if (n != 9)
	{
		putchar (',');
		putchar (' ');
	}
	n++;
}
	putchar ('\n');
return (0);
}
