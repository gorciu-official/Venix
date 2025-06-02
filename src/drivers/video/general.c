#include <types.h>

extern void vga_print(const char* str);

void print(const char* str) {
    vga_print(str);
}

bool printk(const char* str) {
#ifndef __VENIX_DISABLE_KPRINT
    print(str);
    return true;
#else
    return false;
#endif
}