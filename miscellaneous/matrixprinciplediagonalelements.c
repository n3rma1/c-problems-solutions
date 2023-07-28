// wap to find sum of principle diagonal elements

#include <stdio.h>

int main()
{
    float sum = 0.0;
    int mat[5][5];
    printf("enter the data of matrix: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("The sum of principle diagonal elements are: \n");
    for (int i = 0; i < 5; i++)
    {
      sum+= mat[i][i];
    }
    printf("\nsum is: %f", sum);
    
}