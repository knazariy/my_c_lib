#pragma once

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

void *mx_memset(void *b, int c, size_t len);

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);

int mx_memcmp(const void *s1, const void *s2, size_t n);

void *mx_realloc(void *ptr, size_t size);

void *mx_memmove(void *dst, const void *src, size_t len);

void *mx_memrchr(const void *s, int c, size_t n);

void *mx_memchr(const void *s, int c, size_t n);

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
