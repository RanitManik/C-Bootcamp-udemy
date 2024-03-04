// Writing a C program that Convert minutes to years and days

#include <stdio.h>

int main() {
    // Declare and initialize variables
    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    const double minutesInYear = 60.0 * 24.0 * 365.0;

    // Prompt user for input
    printf("Please enter the number of minutes: ");
    scanf("%d", &minutesEntered);

    // Calculate years and days
    years = minutesEntered / minutesInYear;
    days = (minutesEntered / 60.0) / 24.0;

    // Display the result with proper formatting
    printf("%d minutes is approximately %.2f years and %.2f days\n", minutesEntered, years, days);

    return 0;
}
