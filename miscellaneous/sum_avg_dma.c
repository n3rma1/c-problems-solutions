// to find sum and avg of numbers using dma

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    float sum = 0.0, avg = 0.0;
    int n = 5;
    ptr = (int*)malloc(sizeof(int)*n);

    printf("Enter no.s: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    
    for (int i = 0; i < 5; i++)
    {
        sum+=*(ptr + i);
    }
    avg = sum/5;
    printf("%f %f", sum, avg);
    
    
}