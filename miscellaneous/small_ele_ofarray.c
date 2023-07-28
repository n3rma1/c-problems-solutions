#include <stdio.h>
int smallest(int test[]){
     int smallest = test[0];
    for (int i = 0; i < 5; i++)
    {
       if(test[i] < smallest){
        smallest = test[i];
       }
    }
     return smallest;
    
}
int main(int argc, char const *argv[])
{
    int arr[5];
    printf("Enter the elements of array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",smallest(arr));
    
    return 0;
}
