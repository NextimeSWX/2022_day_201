/*
 * E89 Pedagogical & Technical Lab
 * project:     is number
 * created on:  2023-01-31 - 11:49 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: is_number.c
 */

#include "stu.h"

int is_num(char c)
{
    if (c >= '0' && c <= '9') {
        return (1);
    }
    return (0);
}
