// Writing a C program that Create and use an enum type

#include <stdio.h>

// Define an enum type for Company
enum Company {
    GOOGLE,     // 0
    FACEBOOK,   // 1
    XEROX,      // 2
    YAHOO = 10, // 10
    EBAY,       // 11
    MICROSOFT   // 12
};

int main() {
    // Declare variables of the Company enum type
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    // Display the values of enum variables
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);

    return 0;
}
