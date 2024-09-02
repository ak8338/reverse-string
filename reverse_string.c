#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

void reverse_string(char *str);

int main() {
    char str1[MAX_STRING_LENGTH], str2[MAX_STRING_LENGTH], concat_str[MAX_STRING_LENGTH * 2];

    printf("Enter the first string: ");
    fgets(str1, MAX_STRING_LENGTH, stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character

    printf("Enter the second string: ");
    fgets(str2, MAX_STRING_LENGTH, stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character

    strcpy(concat_str, str1);
    strcat(concat_str, str2);

    printf("Concatenated string: ");
    puts(concat_str);

    reverse_string(concat_str);

    printf("Reversed concatenated string: ");
    puts(concat_str);

    return 0;
}

void reverse_string(char *str) {
    int length = strlen(str);
    int half_length = length / 2;

    for (int i = 0; i < half_length; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}
