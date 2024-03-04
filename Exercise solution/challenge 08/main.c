// Writing a C program that Generate Prime Numbers

#include <stdio.h>
#include <stdbool.h>

#define MAX_PRIMES 50

int main() {
    int p, i, primeIndex = 2;
    int primes[MAX_PRIMES] = {2, 3};  // Initialize with the first two prime numbers

    // Iterate through odd numbers starting from 5
    for (p = 5; p <= 100; p += 2) {
        bool isPrime = true;

        // Check divisibility by previously found primes
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) {
            if (p % primes[i] == 0) {
                isPrime = false;
            }
        }

        if (isPrime) {
            primes[primeIndex++] = p;
        }
    }

    // Print the prime numbers
    for (i = 0; i < primeIndex; ++i) {
        printf("%i  ", primes[i]);
    }

    printf("\n");
    return 0;
}
