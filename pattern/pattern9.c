/*

    * 
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
    
*/

#include <stdio.h>

int main()
{
    int n = 5;
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int space_num = row <= n ? n - row : row - n; 
        for (int space = 1; space <= space_num; space++)
        {
            printf(" ");  
        }
        
        int col_num = row <= n ? row : 2 * n - row; 
        for (int col= 1; col <= col_num ; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}