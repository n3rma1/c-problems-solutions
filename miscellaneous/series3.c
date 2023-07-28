/*

1 - 1/2^2 + 1/3^2 - 1/4^2 .... + 1/n^2

*/

#include <stdio.h>
#include <math.h>
int main()
{
    float sum= 0;
    int n = 2;
    int sign = 1;
    for (int i = 1; i <= n; i++)
    {
    
        float power = pow(i,2);
        sum = sum + 1/power * sign;
        sign *= -1;
        
    }
    printf("%f", sum);
}