#include "main.h"

/**
  * print_alphabet_x10 - this functtion
  * Description: this prints outa-z in lower case
  * and also in multiple of 10
  * Return: returns void
  */

void print_alphabet_x10(void)
{
	int i;


	for (i = 0; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
