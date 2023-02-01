/*
 * E89 Pedagogical & Technical Lab
 * project:     atoi
 * created on:  2023-01-31 - 15:47 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: atoi.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(atoi, normal) {
cr_assert_eq(stu_atoi("1985"), 1985);
}
Test(atoi, 1) {
cr_assert_eq(stu_atoi("-1985"), -1985);
}
