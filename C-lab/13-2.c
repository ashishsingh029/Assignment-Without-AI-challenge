#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[2][n];
    int prev = 0; // Row index for prev.
    int curr = 1; // Row index for curr.
    for(int i=1;i<=n;i++) {
        for(int k=n;k>i;k--) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            if(j == 0 || j == i-1) {
                a[curr][j] = 1;
            } else {
                a[curr][j] = a[prev][j] + a[prev][j-1];
            }
            printf("%d ", a[curr][j]);
        }
        printf("\n");
        // swap prev and curr
        prev = (prev + 1)%2;
        curr = (curr + 1)%2;
    }
    return 0;
}