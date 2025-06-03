#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for(int j=n;j>i;j--) {
            printf(" ");
        }
        for(char k='A';k<'A'+i;k++) {
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}