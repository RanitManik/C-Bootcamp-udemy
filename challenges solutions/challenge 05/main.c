// Printing the byte size of the basic data types

#include <stdio.h>

int main() {
    printf("Size of char: %llu bytes\n", sizeof(char)); // Size of char: 1 bytes
    printf("Size of short: %llu bytes\n", sizeof(short)); // Size of short: 2 bytes
    printf("Size of int: %llu bytes\n", sizeof(int)); // Size of int: 4 bytes
    printf("Size of long: %llu bytes\n", sizeof(long)); // Size of long: 4 bytes
    printf("Size of long long: %llu bytes\n", sizeof(long long)); // Size of long long: 8 bytes
    printf("Size of float: %llu bytes\n", sizeof(float)); // Size of float: 4 bytes
    printf("Size of double: %llu bytes\n", sizeof(double)); // Size of double: 8 bytes
    printf("Size of long double: %llu bytes\n", sizeof(long double)); // Size of long double: 16 bytes

    return 0;
}
