#include <stdio.h>
int gcdRecursive(int, int);
int main() {
    int a, b;
    scanf("%d %d", &a, &b); 
    int ans = gcdRecursive(a, b);
    printf("GCD(%d, %d) = %d", a, b, ans);
    return 0;
}
int gcdRecursive(int a, int b) {
    if(a == 0) {
        return b;
    }
    return gcdRecursive(b%a, a);
}