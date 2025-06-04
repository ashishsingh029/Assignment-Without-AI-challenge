#include <stdio.h>
int factorialRecursive(int);
int main() {
    int n;
    scanf("%d", &n);
    int ans = factorialRecursive(n);
    printf("%d! = %d", n, ans);
    return 0;
}
int factorialRecursive(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n-1);
}