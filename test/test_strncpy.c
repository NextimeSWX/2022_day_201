/*
 * E89 Pedagogical & Technical Lab
 * project:     strncpy
 * created on:  2023-02-01 - 10:04 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strncpy.c
 */

#include <stdlib.h>
#include "stu.h"
#include <criterion/criterion.h>
Test(strncpy, normal) {

    char *str_a;

    str_a = malloc(7 * sizeof(char));
    cr_assert_str_eq(stu_strncpy(str_a, "hello!", 2), "hel");
}
