// product of two numbers using recursion

#include <stdio.h>
int product(int x, int y){
    if(y == 0){
        return 0;
    }else if(y > 0){
        return x + product(x , y-1);
    }else{
        return -product(x, -y); 
    }
}
int main()
{
    int n,d;
    printf("Enter any two numbers: ");
    scanf("%d %d", &n,&d);
   printf("%d", product(n,d));
}