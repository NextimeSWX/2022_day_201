/*
 * E89 Pedagogical & Technical Lab
 * project:     puts
 * created on:  2023-01-31 - 16:09 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_puts.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(puts, normal) {
cr_assert_eq(stu_puts("hello"), 5);
}
