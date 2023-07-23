/*

1 
2 3
4 5 6
7 8 9 10


*/


#include <stdio.h>

int main()
{
    int n = 5; // no. of rows
    int num = 1;
    for (int row = 1; row < n; row++)
    {
        for (int col = 1; col <= row ; col++)
        {
            printf("%d ",num);
            num++;
        }
        
        printf("\n");
    }
    
}