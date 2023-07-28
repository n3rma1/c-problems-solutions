// wap to input the number and find sum of digits

#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    float sum = 0;
    int r;
    while(n!=0){
        r = n%10;
        n/=10;
        sum+=r;
    }
    printf("%f", sum);
}