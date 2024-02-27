// Writing a C program that Write some functions!

#include <stdio.h>

int gcd(int u, int v);

float absoluteValue(float x);

float squareRoot(float x);

int main() {
    int result;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult;

    // Test GCD function
    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);

    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));

    // Test Absolute Value Function
    absoluteValueResult = absoluteValue(f1);
    printf("result = %.2f\n", absoluteValueResult);
    printf("f1 = %.2f\n", f1);

    absoluteValueResult = absoluteValue(f2) + absoluteValue(f3);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue((float) i1);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue(i1);
    printf("result = %.2f\n", absoluteValueResult);

    printf("%.2f\n\n\n\n", absoluteValue(-6.0) / 4);

    // Test Square Root Function
    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(225.0));

    return 0;
}

int gcd(int u, int v) {
    int temp = 0;

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

float squareRoot(float x) {
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if (x < 0) {
        printf("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    } else {
        while (absoluteValue(guess * guess - x) >= epsilon)
            guess = (x / guess + guess) / 2.0;

        returnValue = guess;
    }

    return returnValue;
}

float absoluteValue(float x) {
    if (x < 0)
        x = -x;

    return x;
}
