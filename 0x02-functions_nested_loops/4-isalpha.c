#include "main.h"
#include <ctype.h>

/**
  * _isalpha - This function checks for alphabet
  * Description: this function checks whether the parameeter given
  * is aphabet or nt
  * @c: the parameter to be evaluated
  * Return: this function retturns 0 or 1
  */

int _isalpha(int c)
{
	int answer = 0;

	if (isalpha(c))
	{
		answer = 1;
	}
	return (answer);
}
