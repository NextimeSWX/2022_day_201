/*
 * E89 Pedagogical & Technical Lab
 * project:     strcat
 * created on:  2023-01-31 - 16:15 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strcat.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(strcat, normal) {
    char *dest;

    dest = malloc(sizeof(char) * 10);
    strcpy(dest, "hello");
    cr_assert_str_eq(stu_strcat(dest, "papa"), "hellopapa");
}

