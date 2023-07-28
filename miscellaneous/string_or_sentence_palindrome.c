#include <stdio.h>
#include <string.h>
int main()
{
    int len, flag = 1,i,j;
    char line[100];
    printf("Enter any sentence: ");
    scanf("%[^\n]",line);
    
    len = strlen(line);
    for (i = 0,j = len-1; i < len/2; i++,j--)
    {
        if(line[i]!=line[j]){
            flag = 0;
            break;
        }
    }
    flag == 1 ? printf("Palindrome"):printf("not a palindrome");
    
    
    
}