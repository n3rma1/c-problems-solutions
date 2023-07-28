#include <stdio.h>

int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i; 
    }
    return result;
    
}
int main()
{
    int num,n,fact;
    printf("Of how many numbers you want to calculate factorial\? ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        printf("Enter the number %d: ",i);
        scanf("%d",&n);

        fact = factorial(n);
        printf("%d! = %d\n",n,fact);
    }
    
}