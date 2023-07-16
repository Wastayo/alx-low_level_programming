#include <stdio.h>

/**
  * main - Entry point
  * Description: The main function prints
  *           out alphabet form a - z in lower cas
  * Return: This returns 0
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
