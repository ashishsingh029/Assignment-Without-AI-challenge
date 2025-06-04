#include <stdio.h>
void reverseArray(int *, int);
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    reverseArray(a, n);
    printf("Reversed Array:\n");
    for(int i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
void reverseArray(int *a, int n) {
    for(int i=0;i<n/2;i++) {
        a[i] = (a[n-i-1] + a[i]) - (a[n-i-1] = a[i]);
    }
}