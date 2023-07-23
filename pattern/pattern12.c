/*
      1 
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4
  3 2 1 2 3
    2 1 2
      1

*/

#include <stdio.h>
int n = 4;

int main(){
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int c = row > n ? 2 * n - row : row;

        for (int space = 0; space < n - c; space++)
        {
            printf("  ");
        }
        
        for (int col = c; col >= 1; col--)  // runs from row number to 1
        {
            printf("%d ",col);
        }
        for (int col = 2; col <= c; col++) //runs from 2 to row number
        {
            printf("%d ", col);
        }
        
        printf("\n");
    }
    
}