#include <stdio.h>
void fibbonacciRecursive(int, int, int);
int main() {
    int n;
    scanf("%d", &n);
    printf("Fibonnaci serires of %d terms:\n0 1 ", n);
    int a = 0,b = 1;
    int i=0;
    while(i < n-1) {
        int sum = a+b;
        printf("%d ", sum);
        a = b;
        b = sum;
        i++;
    }
    return 0;
}