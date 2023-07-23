/*
    * * * * * 
    * * * *
    * * *
    * *
    *

*/



#include <stdio.h>

int main()
{
    int n = 5; // n is no. of rows
    for (int row = 0; row< n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
