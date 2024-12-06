#pragma once
#include <stdint.h>
#include <stddef.h>
void * memcpy(void *dst0, const void *src0, size_t length);
void *
memmove(void *s1, const void *s2, size_t n);
void
bcopy(const void *s1, void *s2, size_t n);
int memcmp(const void *vl, const void *vr, size_t n);
size_t strlen(const char* str);