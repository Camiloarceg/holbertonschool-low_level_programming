#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode rot13
 * @str: string
 *
 *
 * Return: s encode
 */
char *rot13(char *str)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int m = 0;

	while (str[i] != '\0')
	{
		for (m = 0; str1[m]; m++)
		{
			if (str[i] == str1[m])
			{
				str[i] = str2[m];
				break;
			}
		}

		i++;
	}
	return (str);
}
