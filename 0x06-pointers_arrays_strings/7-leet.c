#include "main.h"

/**
  * leet - a function that encodes a string into 1337.
  * @x: pointer to string.
  * Return: pointer to x.
  */

char *leet(char *x)
{
	int string_length, leetcount;
	char leetletters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	string_length = 0;
	while (x[string_length] != '\0')
	{
		leetcount = 0;
		while (leetcount < 10)
		{
			if (leetletters[leetcount] == x[string_length])
			{
				x[string_length] = leetNums[leetcount];
			}
			leetcount++;
		}
		string_length++;
	}
	return (x);
}
