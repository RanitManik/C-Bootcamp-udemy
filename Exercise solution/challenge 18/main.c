// Writing a C program that Declares and Initializing a structure

#include <stdio.h>

struct employee {
    char name[30];
    char date[15];
    float salary;
};

int main() {
    // Declare and initialize a structure variable
    struct employee emp = {"Mike", "7/16/15", 76909.00f};

    // Display initial employee information
    printf("\nInitial Employee Information:");
    printf("\nName: %s", emp.name);
    printf("\nHire Date: %s", emp.date);
    printf("\nSalary: %.2f\n", emp.salary);

    // Input new employee information
    printf("\nEnter employee information: \n");

    printf("Name: ");
    scanf("%29s", emp.name);  // Limit input to 29 characters to prevent buffer overflow

    printf("Hire Date: ");
    scanf("%14s", emp.date);  // Limit input to 14 characters to prevent buffer overflow

    printf("Salary: ");
    scanf("%f", &emp.salary);

    // Display updated employee information
    printf("\nUpdated Employee Information:");
    printf("\nName: %s", emp.name);
    printf("\nHire Date: %s", emp.date);
    printf("\nSalary: %.2f\n", emp.salary);

    return 0;
}
