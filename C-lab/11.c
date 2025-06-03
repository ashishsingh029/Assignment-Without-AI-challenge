#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int sign = -1;
    for(int i=1;i<=n;i++) {
        sign *= -1;
        sum += i*sign;
    }
    printf("Pattern Sum = %d", sum);
    return 0;
}