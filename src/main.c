#include <types.h>

int main() {
    vga_print("\x1b[31;47mHello \x1b[34mWorld!\n");
    vga_print("This is \x1b[32mgreen\x1b[0m and this \x1b[41mred background\x1b[0m.\n");
    vga_print("\x1b[10;10HCursor moved here!\n");
    return 0;
}