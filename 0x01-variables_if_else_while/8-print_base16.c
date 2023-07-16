#include <stdio.h>

/**
  * main - Entry point
  * Description: Prints out an hexadecimal number
  * Return: returns 0
  */

int main(void)
{
	int n;
	char base[16] = "0123456789abcdef";

	for (n = 0; n < 16; n++)
	{
		putchar(base[n]);
	}
	putchar('\n');
	return (0);
}
