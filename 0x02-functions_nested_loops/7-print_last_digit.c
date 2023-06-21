#include "main.h"
/**
  * print_last_digit - Prints the last digit
  * of a number.
  *
  * @m: input the number as integer
  *
  * Return: last digit.
  */

int print_last_digit(int m)
{
	int y;

	y = m % 10;
	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
}


