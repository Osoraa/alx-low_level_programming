#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <ctype.h>

/**
 * main - Program entry point.
 *
 * Return: Always 0.
 */
int main(void);
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *string);
char *cap_string(char *string);
char *leet(char *string);
char *rot13(char *string);
void print_number(int n);

#endif /* _MAIN_H_ */
