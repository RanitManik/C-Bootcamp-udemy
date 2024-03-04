// Writing a C program that Print the contents of a file in reverse order

#include <stdio.h>

#define FILENAME "Exercise solution/texts/text.txt"

int main() {
    FILE *fp = NULL;

    // Variables for file size and iteration
    int fileSize = 0;
    int currentPosition = 0;

    // Open the file for reading
    fp = fopen(FILENAME, "r");

    // Check if the file opened successfully
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    // Move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // Get the position of the file pointer (file size)
    fileSize = ftell(fp);

    // Iterate through the file in reverse order
    while (currentPosition < fileSize) {
        currentPosition++;

        // Move the file pointer backward by 'currentPosition'
        fseek(fp, -currentPosition, SEEK_END);

        // Print the character at the current position
        printf("%c", fgetc(fp));
    }

    printf("\n");

    // Close the file
    fclose(fp);

    return 0;
}

