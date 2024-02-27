// Writing a C program that Uses Pointers as parameters

#include <stdio.h>

void square(int *x);

int main() {
    int num = 5;

    square(&num);
    printf("The square of the given number is %d\n", num);

    return 0;
}

void square(int *x) {
    *x = (*x) * (*x);
}
