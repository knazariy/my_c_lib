#pragma once

#include <wchar.h>
#include <unistd.h>
#include <stdlib.h>

void mx_printchar(char c);

void mx_print_unicode(wchar_t c);

void mx_printstr(const char *str);

void mx_print_strarr(char **arr, const char *delim);

void mx_printint(int n);

double mx_pow(double n, unsigned int pow);

int mx_sqrt(int x);

int mx_strlen(const char *s);

char *mx_strnew(int size);

char *mx_nbr_to_hex(unsigned long nbr);

unsigned long mx_hex_to_nbr(const char *hex);

char *mx_itoa(int number);

void mx_foreach(int *arr, int size, void (*f)(int));

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count);

int mx_bubble_sort(int *arr, int size);

int mx_quicksort(int *arr, int left, int right);
