#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *@p:pointer points to a string
 *
 * Return: pointer to a string
 */
char *cap_string(char *p)
{
	count += 1;
    if (!((*p >= 97 && *p <= 122)||(*p >= 65 && *p <= 90)))
    {
      cap = 1;
    }
    p++;
    if ((cap == 1) && ((*p >= 97 && *p <= 122)))
    {
      *p = *p - 32;
      cap = 0;
    }
    if ((cap == 1) && (*p >= 65 && *p <= 90))
    {
      cap = 0;  
    }
  }
  while (count > 0)
    {
        p--;
        count--;
    }
  
  return (p);
}
