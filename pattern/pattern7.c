/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/


//rows 2*row-1

#include <stdio.h>

int main()
{
    int n = 5; // no. of column
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row ; space++)
        {
            printf("  "); // two spaces(check what happens when we enter 1 space)
        }
        
        for (int col = 1; col <= (2 * row - 1) ; col++)
        {
            printf("* ");    
            
        }
        printf("\n");
    }
    
}