#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *@p:pointer points to a string
 *
 * Return: pointer to a string
 */
char *cap_string(char *p)
{
	int i, m;
	char alert[] = {' ', '\n', '\t', ',', ';', '.',
		     '!', '?', '"', '(', ')', '}', '{', '}'};

	for (i = 0; p[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((p[i] >= 'a' && p[i] <= 'z'))
				p[i] = p[i] - 32;
		}
		for (m = 0; alert[m] != '\0'; m++)
		{
			if (p[i] == alert[m])
			{
				i++;
				if (p[i] >= 'a' && p[i] <= 'z')
					p[i] = p[i] - 32;
				i--;
			}
		}
	}
	return (p);
}
