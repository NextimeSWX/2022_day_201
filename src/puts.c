/*
 * E89 Pedagogical & Technical Lab
 * project:     puts
 * created on:  2023-01-30 - 09:41 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: puts.c
 */

#include "stu.h"
#include <unistd.h>

int stu_puts(const char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0') {
        write(1, &str[i], 1);
        i += 1;
    }
    return (i);
}
