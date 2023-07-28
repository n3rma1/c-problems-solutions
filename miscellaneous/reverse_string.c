#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,j,len,temp;
    printf("Enter any word to reverse: ");
    scanf("%s",str);
    len = strlen(str);
    j = len - 1;
    for (int i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The reverse is %s",str);
    
}