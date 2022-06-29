#ifndef PRINTAME_INCLUDE
#define PRINTAME_INCLUDE
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size, void (*action)(int));
#include <stddef.h>

#endif
