// Writing a C program for Utilizing common string functions

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 50
#define MAX_STRING_COUNT 25

void printReversedString(const char str[]);

void bubbleSortStrings(char arr[][MAX_STRING_LENGTH], int count);

int main() {
    char str[100];
    char name[MAX_STRING_COUNT][MAX_STRING_LENGTH];

    int n;

    printf("\nPrint individual characters of a string in reverse order:\n");
    printf("----------------------------------------------------------\n");

    printf("Input the string: ");
    scanf("%s", str);

    printf("The characters of the string in reverse are:\n");
    printReversedString(str);

    printf("\n----------------------------------------------------------\n");

    printf("\nSort the strings of an array using bubble sort:\n");
    printf("---------------------------------------------------------\n");

    printf("Input the number of strings: ");
    scanf("%d", &n);

    printf("Input %d strings:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }

    bubbleSortStrings(name, n);

    printf("The strings after sorting:\n");

    for (int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}

void printReversedString(const char str[]) {
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
}

void bubbleSortStrings(char arr[][MAX_STRING_LENGTH], int count) {
    char temp[MAX_STRING_LENGTH];

    for (int i = 1; i <= count; i++) {
        for (int j = 0; j <= count - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strncpy(temp, arr[j], sizeof(temp) - 1);
                strncpy(arr[j], arr[j + 1], sizeof(arr[j]) - 1);
                strncpy(arr[j + 1], temp, sizeof(arr[j + 1]) - 1);
            }
        }
    }
}
