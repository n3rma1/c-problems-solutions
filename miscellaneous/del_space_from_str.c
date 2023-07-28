//deleting space from string

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);
    char *ptr = str; // Pointer to traverse the string

    while (*ptr != '\0') {
        if (*ptr != ' ') {
            printf("%c", *ptr);
        }
        ptr++; // Move the pointer to the next character
    }

    return 0;
}
