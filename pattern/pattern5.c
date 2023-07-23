/*

A
B B
C C C
D D D D
E E E E E

*/

#include <stdio.h>

int main()
{
    int n = 5; // no. of rows in pattern
    char ch = 'A'; // starting character of pattern
    for (int row = 1; row <=n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
        
    }
    
}













