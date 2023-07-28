#include <stdio.h>
#include <ctype.h> // Needed for isdigit() and isalpha()

int main() {
    FILE *file;
    char filename[100];
    int ch, characterCount = 0, digitCount = 0, spaceCount = 0, specialCount = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("\nContent of the file:\n");

    // Read and display the data character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
        characterCount++;

        if (isdigit(ch)) {
            digitCount++;
        } else if (isspace(ch)) {
            spaceCount++;
        } else if (!isalpha(ch) && !isdigit(ch)) {
            specialCount++;
        }
    }

    // Close the file
    fclose(file);

    printf("\n\nStatistics:\n");
    printf("Number of characters: %d\n", characterCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of spaces: %d\n", spaceCount);
    printf("Number of special characters: %d\n", specialCount);

    return 0;
}
