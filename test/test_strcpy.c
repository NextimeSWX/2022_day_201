/*
 * E89 Pedagogical & Technical Lab
 * project:     strcpy
 * created on:  2023-02-01 - 09:53 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strcpy.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(strcpy, normal) {

char *str_a;

str_a = malloc(7 * sizeof(char));
    cr_assert_str_eq(stu_strcpy(str_a, "hello"), "hello");
}
