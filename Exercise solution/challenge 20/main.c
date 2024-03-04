// Writing a C program that Finds the number of lines in a file

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "Exercise solution/texts/text.txt"

int main() {
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    int linesCount = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            linesCount++;
        }
    }

    fclose(fp);

    if (ferror(fp)) {
        perror("Error reading file");
        return EXIT_FAILURE;
    }

    printf("Total number of lines: %d\n", linesCount);

    return 0;
}
