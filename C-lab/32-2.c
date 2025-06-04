#include <stdio.h>
int factorialIterative(int);
int main() {
    int n;
    scanf("%d", &n);
    int ans = factorialIterative(n);
    printf("%d! = %d", n, ans);
    return 0;
}
int factorialIterative(int n) {
    int ans = 1;
    while(n > 0) {
        ans *= n;
        n--;
    }
    return ans;
}