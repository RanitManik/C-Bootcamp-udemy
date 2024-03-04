// Writing a C program that implements Pointer Basics

#include <stdio.h>

int main() {
    int num = 150;
    int *pNum = &num;

    printf("Address of num: %p\n", (void *) &num);
    printf("Address of pNum: %p\n", (void *) &pNum);
    printf("Value of pNum (address it holds): %p\n", (void *) pNum);
    printf("Value of what pNum is pointing to (value of num): %d\n", *pNum);

    return 0;
}
