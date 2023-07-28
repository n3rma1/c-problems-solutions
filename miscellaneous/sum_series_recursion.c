#include <stdio.h>
// 1 + 2+3....

int sum(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sum(n-1);
    }
}
int main()
{
    int n;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    printf("The sum of series is : %d", sum(n));
}