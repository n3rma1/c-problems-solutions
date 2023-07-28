//printing armstrong number

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits in the number
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    // Calculate the sum of digits raised to the power of numDigits
    num = originalNum;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    // Check if the number is Armstrong
    return (originalNum == sum);
}

int main() {
    printf("Armstrong numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
