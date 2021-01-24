#pragma once

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s);

void mx_swap_char(char *s1, char *s2);

char *mx_strcpy(char *dst, const char *src);

int mx_strcmp(const char *s1, const char *s2);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strcat(char *restrict s1, const char *restrict s2);

char *mx_strncat(char *restrict s1, const char *restrict s2, size_t len);

char *mx_strnew(const int size);

char *mx_strdup(const char *s1);

char *mx_strjoin(const char *s1, const char *s2);

void mx_strdel(char **str);

void mx_del_strarr(char ***arr);

char *mx_file_to_str(const char *filename);

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);

char *mx_strncpy(char *dst, const char *src, int len);

void mx_str_reverse(char *s);

char *mx_strndup(const char *s1, size_t n);

char *mx_strstr(const char *haystack, const char *needle);

int mx_count_words(const char *str, char delimiter);

int mx_count_substr(const char *str, const char *sub);

char *mx_strchr(const char *s, int c);

int mx_get_char_index(const char *str, char c);

bool mx_isspace(char c);

int mx_get_substr_index(const char *str, const char *sub);

char *mx_strtrim(const char *str);

char *mx_del_extra_spaces(const char *str);

char **mx_strsplit(char const *s, char delim);

char *mx_replace_substr(const char *str, const char *sub, const char *nsub);
