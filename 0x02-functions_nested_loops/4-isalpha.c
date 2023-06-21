#include "main.h"

/**
  * _isalph - Shows 1 if the input is an a
  * letter. Another cases, shows 0
  *
  * @c: The character is in ASCII code
  *
  * Return: 1 for letters or 0 for anything else
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

