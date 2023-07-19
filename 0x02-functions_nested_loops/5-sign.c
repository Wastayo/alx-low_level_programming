#include <stdio.h>
#include "main.h"

/**
  * print_sign - protype function
  * Description: this function takes a parameter then evaluates it
  * @n: parameter to be evaluated
  * Return: returns a value of 1,-1 or 0
  */

int print_sign(int n)
{
	int answer = 0;

	if (n > 0)
	{
		_putchar('+');
		answer = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		answer = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		answer = -1;
	}
	return (answer);

}
