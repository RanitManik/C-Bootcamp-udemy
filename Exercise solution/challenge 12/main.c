// Writing a C program for Understanding char arrays

#include <stdio.h>
#include <stdbool.h>

int stringLength(const char string[]);

void concat(char result[], const char str1[], const char str2[]);

bool equalStrings(const char s1[], const char s2[]);

int main() {
    const char word1[] = "ranit";
    const char word2[] = "ok";
    const char word3[] = "whatever";
    char result[50];

    // Print string lengths
    printf("Length of '%s': %d\n", word1, stringLength(word1));
    printf("Length of '%s': %d\n", word2, stringLength(word2));
    printf("Length of '%s': %d\n", word3, stringLength(word3));

    // Concatenate two strings
    concat(result, word1, word2);
    printf("\nConcatenated String: %s\n", result);

    // Check string equality
    printf("Are 'Ranit' and 'Ranit' equal? %s\n", equalStrings("Ranit", "Ranit") ? "Yes" : "No");
    printf("Are 'Ranit' and 'RanitManik' equal? %s\n", equalStrings("Ranit", "RanitManik") ? "Yes" : "No");

    return 0;
}

int stringLength(const char string[]) {
    int count = 0;

    while (string[count] != '\0') {
        ++count;
    }

    return count;
}

void concat(char result[], const char str1[], const char str2[]) {
    int i = 0, j = 0;

    // Copy str1 to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        ++i;
    }

    // Concatenate str2 to result
    while (str2[j] != '\0') {
        result[i + j] = str2[j];
        ++j;
    }

    // Null-terminate the result string
    result[i + j] = '\0';
}

bool equalStrings(const char s1[], const char s2[]) {
    int i = 0;

    // Compare each character until the end of either string
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }

    // Check if both strings are null-terminated at the same position
    return (s1[i] == '\0' && s2[i] == '\0');
}

