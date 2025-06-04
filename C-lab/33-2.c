#include <stdio.h>
int gcdIterative(int, int);
int main() {
    int a, b;
    scanf("%d %d", &a, &b); 
    int ans = gcdIterative(a, b);
    printf("GCD(%d, %d) = %d", a, b, ans);
    return 0;
}
int gcdIterative(int a, int b) {
    while(a != 0) {
        int rem = b%a;
        b = a;
        a = rem;
    }
    return b;
}