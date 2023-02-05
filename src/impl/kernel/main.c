#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to the freeOS 64-bit kernel!\n ");
    print_str("This OS was made by Leander Lombardi.");
}
