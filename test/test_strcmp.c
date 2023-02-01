/*
 * E89 Pedagogical & Technical Lab
 * project:     strcmp
 * created on:  2023-02-01 - 09:49 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strcmp.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(strcmp, normal) {
    cr_assert_eq(stu_strcmp("345", "355"), -1);
}
Test(strcmp, 1) {
    cr_assert_eq(stu_strcmp("800", "200"), 1);
}
Test(strcmp, null) {
    cr_assert_eq(stu_strcmp("500", "500"), 0);
}
