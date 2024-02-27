// Writing a C program that Uses Dynamic Memory

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size = 0;
    char *text = NULL;

    printf("Enter the limit of the text: ");
    scanf("%d", &size);

    // Check for a valid size
    if (size <= 0) {
        printf("Invalid size. Please enter a positive size.\n");
        return 1;  // Exit with an error code
    }

    text = (char *) malloc(size * sizeof(char));

    // Check if memory allocation was successful
    if (text != NULL) {
        printf("Enter some text: ");
        // Consume the newline character left in the buffer
        while (getchar() != '\n');

        fgets(text, size, stdin);

        // Remove the newline character if present
        char *newline = strchr(text, '\n');
        if (newline != NULL) {
            *newline = '\0';
        }

        printf("Inputted text is: %s\n", text);
    } else {
        printf("Memory allocation failed.\n");
        return 1;  // Exit with an error code
    }

    free(text);
    text = NULL;

    return 0;
}
