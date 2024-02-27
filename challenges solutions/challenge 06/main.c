// Writing a C program that Determine the amount of weekly Pay

#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main() {
    // Declare variables
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    // Get user input
    printf("Please enter the number of hours worked this week: ");
    scanf("%d", &hours);

    // Calculate the gross pay
    if (hours <= OVERTIME) {
        grossPay = hours * PAYRATE;
    } else {
        grossPay = OVERTIME * PAYRATE;
        double overTimePay = (hours - OVERTIME) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

    // Calculate taxes
    if (grossPay <= 300) {
        taxes = grossPay * TAXRATE_300;
    } else if (grossPay <= 450) {
        taxes = 300 * TAXRATE_300 + (grossPay - 300) * TAXRATE_150;
    } else {
        taxes = 300 * TAXRATE_300 + 150 * TAXRATE_150 + (grossPay - 450) * TAXRATE_REST;
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Display output
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
}
