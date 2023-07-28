//printing fibonacci series using recursion

#include <stdio.h>

int facto(int n){
    if(n==0){
        return 1;
    }else{
        return n * facto(n-1);
    }
}
int main()
{
    printf("enter no.: ");
    int n;
    scanf("%d", &n);
    printf("factorial is : %d" , facto(n));
    return 0;
}