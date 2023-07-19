#include "main.h"
#include <ctype.h>
/**
  * _islower - This prints out 1 or 0
  * Description: This function checks whether the parameter
  * is either lower or upper the prints out 1 or 0 repecttively
  * @c: this parameter is to be evaluate
  * Return: 6this returns either 0 or 1
  */

int _islower(int c)
{
	int answer = 0;

	if (islower(c))
	{
		answer = 1;
	}
	return (answer);
}
