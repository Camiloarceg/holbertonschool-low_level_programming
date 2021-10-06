#ifndef MAIN
#define MAIN

/*prints a char to stdout*/
int _putchar(char c);

/*prints the alphabet, in lowercase, followed by a new line.*/
void print_alphabet(void);

/*prints 10 times the alphabet, in lowercase, followed by a new line. */
void print_alphabet_x10(void);

/* a function that checks for lowercase character */
int _islower(int c);

/* a function that checks for alphabetic character.*/
int _isalpha(int c);

/* a function that prints the sign of a number.*/
int print_sign(int n);

/* a function that computes the absolute value of an integer.*/
int _abs(int);

/* a function that prints the last digit of a number.*/
int print_last_digit(int);

/* a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59. */
void jack_bauer(void);

/* a function that prints the 9 times table, starting with 0. */
void times_table(void);

/* a function that adds two integers and returns the result. */
int add(int, int);

/* a function that prints all natural numbers from n to 98, followed by a new line.*/
void print_to_98(int n);

/* a function that prints the n times table, starting with 0. */
void print_times_table(int n);

#endif
