#ifndef MAIN
#define MAIN
/* writes the character c to stdout */
int _putchar(char c);

/* concatenates two strings. */
char *_strcat(char *dest, char *src);

/* concatenates two strings  */
Prototype: char *_strncat(char *dest, char *src, int n);

/* copies a string. */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings. */
int _strcmp(char *s1, char *s2);

/* reverses the content of an array of integers. */
void reverse_array(int *a, int n);

/* changes all lowercase letters of a string to uppercase. */
char *string_toupper(char *);

/* that capitalizes all words of a string. */
char *cap_string(char *);

/* encodes a string into 1337. */
char *leet(char *);

/* encodes a string using rot13. */
char *rot13(char *);

/*  prints an integer. */
void print_number(int n);

/* adds two numbers. */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* prints a buffer. */
void print_buffer(char *b, int size);










#endif
