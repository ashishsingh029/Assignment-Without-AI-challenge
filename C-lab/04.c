#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Before swapping:\n\ta = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n\ta = %d, b = %d", a, b);
    return 0;
}