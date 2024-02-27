// Writing a C program that Converts characters in a file to uppercase

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "texts/text.txt"
#define TEMPFILE "texts/temp.txt"

int main() {
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    FILE *fp1 = fopen(TEMPFILE, "w");

    if (fp1 == NULL) {
        perror("Error creating temp file");
        fclose(fp);
        return EXIT_FAILURE;
    }

    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }

        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    if (remove(FILENAME) != 0) {
        perror("Error removing original file");
        return EXIT_FAILURE;
    }

    if (rename(TEMPFILE, FILENAME) != 0) {
        perror("Error renaming temp file");
        return EXIT_FAILURE;
    }

    fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        perror("Error opening file after modifications");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
