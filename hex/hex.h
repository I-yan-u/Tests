#ifndef HEX_H
#define HEX_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct typecase - data type with char and function.
 * @c: The character.
 * @f: The function.
 */

typedef struct typecase{
	char c;
        char (*f)(int);
}_case;

void hex(char c, unsigned int i);
char hex_l(int n);
char hex_u(int n);
int _putchar(char c);

#endif
