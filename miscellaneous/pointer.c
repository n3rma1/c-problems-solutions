// to print no. of char, space, vowel in string using poiner

#include <stdio.h>
#include <ctype.h>
int main()
{
    int charcount, space, vowel;
    int str[100];
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    char *ptr = str;
    while(*ptr != '\0'){
        charcount++;

        if(isspace(*ptr)){
            space++;
        }
        char ch = tolower(*ptr);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        }
        ptr++;
    }
    printf("charcount: %d \t space: %d \t vowel: %d", charcount,space, vowel);
}