/*

1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1

*/

#include <stdio.h>

int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n-row+1 ; col++)
        {
            printf("%d ",col);
            
        }
        printf("\n");
    }
    
}
