#include <stdio.h>

long int factorial(int n);
int main()
{
    int n;
    printf("Enter any integer: ");
    scanf("%d",&n);
    printf("\nn! = %ld",factorial(n));
}
long int factorial(int n){
    long int prod = 1;
    if(n>1){
        for (int i = 2; i <= n; i++)
        {
            prod*=i;
        }
        return prod;
        
    }
}