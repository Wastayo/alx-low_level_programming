#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description: this functiom returns a condition statement
  * Return: This returns 0
  */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %i is %d", n, last);
	if (last > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (last == 0)
	{
		printf(" and is 0\n");
	}
	if (last < 6 && last != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
