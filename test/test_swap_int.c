/*
 * E89 Pedagogical & Technical Lab
 * project:     swap int
 * created on:  2023-02-01 - 10:12 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_swap_int.c
 */

#include "stu.h"
#include <criterion/criterion.h>
Test(swap_int, normal) {
    int a = 20;
    int b = 70;
    cr_assert_eq(swap_int(&a, &b), 70);
}
