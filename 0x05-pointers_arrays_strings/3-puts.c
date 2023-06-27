#include "main.h"

/**
  * _puts - A  function that prints a string
  * @str: Pointer to the string
  * Return: string and new line
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

