#include "main.h"
/**
 * leet - encodes a string into 1337.
 *@s: string to encode
 *
 * Return: string encoded.
 */
char *leet(char *s)
{
	int i, m;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (m = 0 ; m <= 4 ; m++)
		{
			if ((s[i] == letters[m]) || (s[i] == (letters[m] + 32)))
				s[i] = numbers[m];
		}
	}
	return (s);
}
