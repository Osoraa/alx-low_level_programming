#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Return: Always 0.
 */
int main(void);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif /* _MAIN_H_ */
