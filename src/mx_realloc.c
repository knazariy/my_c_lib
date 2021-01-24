#include "memory.h"

void *mx_realloc(void *ptr, size_t size) {
    void *result;

    if (!ptr) {
        result = malloc(size);
    } else {
        if (malloc_usable_size(ptr) < size) {
            result = malloc(size);
            mx_memcpy(result, ptr, malloc_usable_size(ptr));
            free(ptr);
        } else {
            result = ptr;
        }
    }
    return result;
}
