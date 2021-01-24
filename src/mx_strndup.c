#include "../inc/strings.h"
		
char *mx_strndup(const char *str, size_t n) {
	return mx_strncpy(mx_strnew(n), str, n);
}
