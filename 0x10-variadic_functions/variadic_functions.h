#ifndef VF
#define VF
#include <stdarg.h>
/**
  struct formats - Struct formats
 *
 * @format: The format
 * @func: The function associated
 */
typedef struct Formats
{
	char *format;
	void (*func)();
}format_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
