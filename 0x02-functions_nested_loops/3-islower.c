#include "main.h"
 /**
   * _islowercase - Shows 1 if the input ia a
   * lowercase character. Another cases, shows 0
   *
   * @c: The character in ASCII code
   *
   * Return: 1 for lowercase character. 0 for the rest.
   */
int _islowercase(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

