#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    float sum = 0;
    for(int i=1;i<=n;i++) {
        printf("%f\n", 1.0/i);
        sum = sum + (1.0 / i);
    }
    printf("Pattern sum = %.2f", sum);
    return 0;
}