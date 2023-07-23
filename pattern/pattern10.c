#include <stdio.h>

int main()
{
    int n = 5;
    for (int row = 1; row <=n; row++)
    {
        
        for (int space = 1; space <= n - row; space++)
        {
            printf(" ");
        }
        
        for (int col = row; col >= 1; col--)
        {
            printf("%d ",col);
        }
        for (int col = 2; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
        
    }
    
}