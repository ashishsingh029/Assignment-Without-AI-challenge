#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Before swapping:\n\ta = %d, b = %d\n", x, y);
    int *p1 = &x;
    int *p2 = &y;
    *p1 = (*p1 + *p2) - (*p2 = *p1);
    printf("After swapping:\n\ta = %d, b = %d", x, y);
    return 0;
}