/*
 * E89 Pedagogical & Technical Lab
 * project:     get digit
 * created on:  2023-01-31 - 15:00 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: get_digit.c
 */

#include "stu.h"

int get_digit(int nb, int index)
{
    int i;

    i = 0;
    while (i < index) {
        nb /= 10;
        i += 1;
    }
    nb %= 10;
    return (nb);
}
