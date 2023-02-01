/*
 * E89 Pedagogical & Technical Lab
 * project:     nb len
 * created on:  2023-01-31 - 14:57 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: nb_len.c
 */

#include "stu.h"

int nb_len(int nb) {
    int i=0;

    while (nb >= 1) {
        nb = nb / 10;
        i = i + 1;
    }
    return (i);
}
