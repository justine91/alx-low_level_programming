#include "main.h"

/**
  * cap_string - a function that capitalizes all words of a string.
  * @x: pointer to string.
  * Return: pointer to x.
  */

char *cap_string(char *x)
{
	int string_count;

	string_count = 0;
	while (x[string_count] != '\0')
	{
		if (x[0] >= 97 && x[0] <= 122)
		{
			x[0] = x[0] - 32;
		}
		if (x[string_count] == ' ' || x[string_count] == '\t'
				|| x[string_count] == '\n' || x[string_count] == ','
				|| x[string_count] == ';' || x[string_count] == '.'
				|| x[string_count] == '!' || x[string_count] == '?'
				|| x[string_count] == '"' || x[string_count] == '('
				|| x[string_count] == ')' || x[string_count] == '{'
				|| x[string_count] == '}')
		{
			if (x[string_count + 1] >= 97 && x[string_count + 1] <= 122)
			{
				x[string_count + 1] = x[string_count + 1] - 32;
			}
		}
		string_count++;
	}
	return (x);
}

