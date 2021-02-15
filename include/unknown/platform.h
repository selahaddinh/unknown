// Platform dependend file

#ifndef PLATFORM_H
#define PLATFORM_H

#include <unknown/types.h>
#include <stdarg.h>

void* memory_alloc(u32 size);

void memory_free(void* ptr);

void print(const char* data, ...);

#endif
