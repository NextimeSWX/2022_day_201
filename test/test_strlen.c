/*
 * E89 Pedagogical & Technical Lab
 * project:     test
 * created on:  2023-01-31 - 15:11 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test strlen
 */

#include <criterion/criterion.h>
#include "stu.h"

Test(strlen, normal) {
    cr_assert_eq(stu_strlen("hello"), 5);
}
Test(strlen, 1) {
    cr_assert_eq(stu_strlen(""), 0);
}
