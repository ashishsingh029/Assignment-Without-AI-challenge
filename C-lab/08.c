#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int sum = 0;
    int pr = 1;
    int temp = num;
    while(temp > 0) {
        int digit = temp%10;
        sum += digit;
        pr *= digit;
        temp /= 10;
    }
    printf("Sum of digits of %d = %d\n", num, sum);
    printf("Product of digits of %d = %d\n", num, pr);
    return 0;
}