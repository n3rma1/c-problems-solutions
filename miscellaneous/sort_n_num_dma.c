// read n number and sort them using DMA

#include <stdio.h>
#include <stdlib.h>

int dynamic(int *ptr){
    int temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j <5 ; j++)
        {
            if((*(ptr + i )) > (*(ptr + j )) ){
                temp = (*(ptr + i));
                (*(ptr + i )) = (*(ptr + j ));
                (*(ptr + j )) = temp;   
            }
        }
        
    }
    
}
int main()
{
    int *ptr;
    int n = 5;
    ptr = (int*)malloc(sizeof(int) *n);
    printf("Enter five numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",(ptr+i));

    }
    dynamic(ptr);
   
   for (int i = 0; i < 5; i++)
   {
    printf("%d ",(*(ptr + i )) );
   }
   
    
    
}