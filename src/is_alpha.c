/*
 * E89 Pedagogical & Technical Lab
 * project:     is_alpha
 * created on:  2023-01-31 - 11:40 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: is_alpha.c
 */

#include "stu.h"

int is_alpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return (1);
    }
    return (0);
}
