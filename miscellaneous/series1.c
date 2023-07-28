// 1 + 1/2! + 2/3! + 3/4!

#include <stdio.h>

int main() {
    float sum = 0.0;
    int fact = 1;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        fact = 1; 
        
        for (int j = i; j <= i+1; j++) {
            fact *= j; 
        }
        sum += (float)i / fact; 
    }

    printf("Sum of the series: %f\n", sum + 1); 
    return 0;
}
