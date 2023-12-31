#include "main.h"


/**
  * _strcmp - a function that compares two strings.
  * @s1: The first string pointer
  * @s2: The second string pointer
  * Return: value less than 0 if string is less than the other,
  * value greater than 0 if string is greater than the other
  * & 0 if the strings are equal
  */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] &&
			 s1[counter] != '\0')
	{
		counter++;
	}

	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
