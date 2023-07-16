#include <stdio.h>

/**
  * main - Entry point
  * Description: print aphabet in reverse
  * Return: returns 0
  */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
