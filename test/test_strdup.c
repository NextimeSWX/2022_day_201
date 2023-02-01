/*
 * E89 Pedagogical & Technical Lab
 * project:     strdup
 * created on:  2023-02-01 - 09:57 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strdup.c
 */
#include <stdlib.h>
#include "stu.h"
#include <criterion/criterion.h>
Test(strdup, normal) {
    char *str_a;
    str_a = malloc(7 * sizeof(char));
    cr_assert_str_eq(str_a = stu_strdup("dydou"), "dydou");
}
Test(strlen, empty) {
    cr_assert_eq(stu_strlen(""), 0);
}
