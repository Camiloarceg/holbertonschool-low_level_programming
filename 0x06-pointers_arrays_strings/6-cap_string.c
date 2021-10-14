#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *@p:pointer points to a string
 *
 * Return: pointer to a string
 */
char *cap_string(char *p)
{
	int cap = 0;
	int count = 0;
	int i;
	int alert[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*p != '\0')
	{
		for (i = 0 ; i <= 13 ; i++)
		{
			if (*p == alert[i])
				cap = 1;
		}
		p++;
		if ((cap == 1) && ((*p >= 97 && *p <= 122)))
		{
			*p = *p - 32;
			cap = 0;
		}
		if ((cap == 1) && !(*p >= 97 && *p <= 122))
		{
			cap = 0;  
		}
		count += 1;
	}
	while (count > 0)
	{
		p--;
		count--;
	}

	return (p);
}
