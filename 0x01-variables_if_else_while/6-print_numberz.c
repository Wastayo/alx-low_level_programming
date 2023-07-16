#include <stdio.h>

/**
  * main - Entry point
  * Description: The main function prints out with putchar function
  * Return: this returns 0
  */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
