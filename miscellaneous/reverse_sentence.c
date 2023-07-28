#include <stdio.h>
void reverseSentence(){
    char c;
    scanf("%c",&c);
    if(c !='\n'){
        reverseSentence();
        printf("%c",c);
    }
}
int main()
{
    printf("Enter any sentence: ");
    reverseSentence();
    return 0;
}