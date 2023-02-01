/*
 * E89 Pedagogical & Technical Lab
 * project:     strndup
 * created on:  2023-02-01 - 10:09 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strndup.c
 */

#include <stdlib.h>
#include "stu.h"
#include <criterion/criterion.h>

Test(strndup, normal) {
    cr_assert_str_eq(stu_strndup("dydou", 1), "dy");
}
