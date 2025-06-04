#include <stdio.h>
void fibbonacciRecursive(int, int, int);
int main() {
    int n;
    scanf("%d", &n);
    printf("Fibonnaci serires of %d terms:\n", n);
    printf("0 1 ");
    fibbonacciRecursive(n, 0, 1);
    return 0;
}
void fibbonacciRecursive(int n,int prev1, int prev2) {
    if(n <= 1) {
        return;
    }
    int curr = prev1 + prev2;
    printf("%d ", curr);
    return fibbonacciRecursive(n-1, prev2, curr);
}