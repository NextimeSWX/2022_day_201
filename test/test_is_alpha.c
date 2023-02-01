/*
 * E89 Pedagogical & Technical Lab
 * project:     is alpha
 * created on:  2023-01-31 - 15:54 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_is_alpha.c
 */
#include "stu.h"
#include <criterion/criterion.h>

Test(is_alpha, normal) {
    cr_assert_eq(is_alpha('B'), 1);
}
Test(is_alpha, 1) {
cr_assert_eq(is_alpha(' '), 0);
}
