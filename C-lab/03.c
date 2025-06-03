#include <stdio.h>
int main() {
    int num, rev = 0;
    scanf("%d", &num);
    int temp = num;
    while(temp > 0) {
        int digit = temp%10;
        rev = rev*10 + digit;
        temp /= 10;
    }
    printf("%d reversed = %d", num, rev);
    return 0;
}