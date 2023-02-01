/*
 * E89 Pedagogical & Technical Lab
 * project:     strchr
 * created on:  2023-02-01 - 09:46 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strchr.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(strchr, normal) {
    cr_assert_str_eq(stu_strchr("je suis Evan", 'E'), "Evan");
}
Test(strchr, empty) {
    cr_assert_str_eq(stu_strchr("Nolaninu", 'o'), "olaninu");
}
