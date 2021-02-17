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

i32 read_file(const char* file_name, char** ptr, u32* size) {
    FILE* file = fopen(file_name, "r");
    if (file == NULL) {
        return -1;
    }

    // Check the file size
    fseek(file, 0l, SEEK_END);
    u32 s = ftell(file);

    // Set the pointer back to the beginning again
    fseek(file, 0l, SEEK_SET);

    print("Found file with size {u} \n", s);

    // Allocate a new buffer for the file content
    *ptr = memory_alloc(s);
    *size = s;

    // Read the content of the file into the buffer 
    u32 bytes_read = fread(*ptr, 1, s, file);
    if (bytes_read != s) {
        print("error\n");
    }
    fclose(file);
}
