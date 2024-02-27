// Writing a C program that Counts characters in a String

#include <stdio.h>

int stringLength(const char *string);

int main() {
    printf("Length: %d\n", stringLength("stringLength test"));
    printf("Length: %d\n", stringLength(""));
    printf("Length: %d\n", stringLength("jason"));

    return 0;
}

int stringLength(const char *string) {
    const char *current = string;

    while (*current) {
        ++current;
    }

    return current - string;
}
