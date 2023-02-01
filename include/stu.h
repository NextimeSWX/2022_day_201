/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <criterion/criterion.h>

int stu_puts(const char *str);
int print_base10(int nb);
int stu_atoi(const char *str);
int stu_strlen(const char *str);
int stu_strcmp(const char *sa, const char *sb);
char *stu_strcpy(char *dest, const char *src);
char *stu_strncpy(char *, const char *, unsigned int);
char *stu_strdup(const char *src);
char *stu_strndup(const char *src, unsigned int n);
char *stu_strcat(char *dest, const char *src);
char *stu_strchr(const char *str, char c);
int is_alpha(char c);
int is_num(char c);
int swap_int(int *a, int *b);
int nb_len(int nb);
int get_digit(int nb, int index);

#endif
