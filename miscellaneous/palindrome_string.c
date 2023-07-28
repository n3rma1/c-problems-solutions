//wap to find palindrome string

#include <stdio.h>
#include <string.h>
int main()
{
    int flag;
    char str[100];
    printf("Enter string: ");
    scanf("%s",&str);
    int len;
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if(str[i] != str[len - i -1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("String is not palindrome.");
    }else{
        printf("String is palindrome.");
    }

}