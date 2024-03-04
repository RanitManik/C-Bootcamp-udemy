// Writing a C program that Print the Area of a Rectangle

#include <stdio.h>

int main() {
    // Declare and initialize variables
    double width = 34.2;
    double height = 65.5;
    double perimeter, area;

    // Calculate perimeter and area
    perimeter = 2.0 * (height + width);
    area = width * height;

    // Displaying results with better formatting
    printf("Rectangle Dimensions:\n");
    printf("Width: %.2f\n", width);
    printf("Height: %.2f\n", height);

    // Displaying calculated values
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);

    return 0;
}
