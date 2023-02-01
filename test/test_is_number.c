/*
 * E89 Pedagogical & Technical Lab
 * project:     is number
 * created on:  2023-01-31 - 15:59 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_is_number.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(is_number, normal) {
cr_assert_eq(is_num('9'), 1);
}
Test(is_number, 1) {
    cr_assert_eq(is_num('B'), 0);
}
