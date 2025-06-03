#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    float avg;
    for(int i=0;i<n;i++) {
        sum += a[i];
    }
    avg = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Avg. = %.2f", avg);
    return 0;
}