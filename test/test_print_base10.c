/*
 * E89 Pedagogical & Technical Lab
 * project:     print base 10
 * created on:  2023-01-31 - 16:01 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_print_base10.c
 */

#include "stu.h"
#include <criterion/criterion.h>

Test(print_base10, normal) {
cr_assert_eq(print_base10(2885), 4);
}
Test(print_base10, negatif) {
cr_assert_eq(print_base10(-8998), 4);
}

