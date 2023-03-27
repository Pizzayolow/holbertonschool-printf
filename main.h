#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct type_print
{
	char *type_arg;
	int (*fp)(va_list);
}type_print;

#endif
