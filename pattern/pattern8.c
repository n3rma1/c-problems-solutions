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
        int col_num = row <= n ? row : 2 * n - row;
        // space = (row -n) printing = n-(row-n)
        for (int col = 1; col <= col_num; col++) 
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}