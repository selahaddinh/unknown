// Linux API for the compiler

#include <unknown/platform.h>
#include <unknown/print_format.h>
#include <stdio.h>
#include <stdlib.h>

static char print_buffer[1024];

void print(const char* data, ...) {
    va_list arg;
    va_start(arg, data);
    u32 size = print_format_to_buf_arg(print_buffer, 1024, data, arg);
    va_end(arg);

    for (u32 i = 0; i < size; i++) {
        printf("%c", print_buffer[i]);
    }
}

void* memory_alloc(u32 size) {
    return malloc(size);
}

void memory_free(void* ptr) {
    free(ptr);
}
