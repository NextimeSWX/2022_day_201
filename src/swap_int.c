/*
 * E89 Pedagogical & Technical Lab
 * project:     swap int
 * created on:  2023-01-31 - 14:21 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: swap_int.c
 */

#include "stu.h"

void swap_int(int *ptr_tata, int *ptr_toto)
{
    int a = *ptr_tata;
    int b = *ptr_toto;
    *ptr_tata = b;
    *ptr_toto = a;
}
