#include <stdio.h>
void swap(int *a, int *b);
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Before swapping:\n\ta = %d, b = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping:\n\ta = %d, b = %d", x, y);
    return 0;
}
void swap(int *p1, int *p2) {
    *p1 = (*p1 + *p2) - (*p2 = *p1);
}