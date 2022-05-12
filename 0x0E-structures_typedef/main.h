#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "dog.h"

/**
 * main - Program entry point.
 *
 * Return: Always 0.
 */
int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _MAIN_H_ */
