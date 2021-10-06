#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/* tells if a number is positive negativo or 0 */
void positive_or_negative(int i);

/* returns the largest of 3 numbers */
int largest_number(int a, int b, int c);

/* converts day of month to day of year, without accounting */
int convert_day(int month, int day);

/* takes a date and prints how many days are */
void print_remaining_days(int month, int day, int year);

#endif
